#include "User.h"
#include "Transactions.h"
#include <string>
#include <stack>
#include <string.h>
#include <string>
User::User() {
	Balance = 0;
	Username = "\0";
	Password = "\0";
	History = new stack<Transactions>;
}

User::User(string init_username, string init_password, double init_balance, stack<Transactions>* init_history)
{
	Username = init_username;
	Password = init_password;
	Balance = init_balance;
	History = init_history;
}

void User::setBalance(double newBalance) {
	this->Balance = newBalance;
}

double User::getBalance() {
	return Balance;
}

void User::changePassword(string newPassword) {
	this->Password = newPassword;
}

void User::changeUserName(string newUsername) {
	this->Username = newUsername;
}

stack<Transactions>* User::getHistory() {
	stack<Transactions> tempHistory;

	while (!History->empty()) {
		cout << History->top().getRecipient().Username << " " << History->top().getSender().Username << " " << History->top().getTransferA() << "\n";
		tempHistory.push(History->top());
		History->pop();
	}
	while (!tempHistory.empty()) {
		History->push(tempHistory.top());
		tempHistory.pop();
	}
	return History;
}

void User::sendMoney(double amount, User& receiver) {
	Transactions* newTrans = new Transactions(amount, this, &receiver);
	this->Balance -= amount;
	receiver.Balance += amount;
	History->push(*newTrans);
}

