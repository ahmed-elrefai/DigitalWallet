#include "User.h"

User::User() {
	this->setUsername("new_user");
	this->setPassword("123");
	this->setBalance(1000);
}

User::User(string username, string password, double balance) {
	this->setUsername(username);
	this->setPassword(password);
	this->setBalance(balance);
}

User::User(string username, string password, double balance, stack<Transaction>* history) {
	this->setUsername(username);
	this->setPassword(password);
	this->setBalance(balance);
	this->history = *history;
}

void User::setUsername(string username) {
	this->username = username;
}
void User::setPassword(string password) {
	this->password = password;
}
void User::setBalance(double balance) {
	this->balance = balance;
}

string User::getUsername() {
	return username;
}
string User::getPassword() {
	return password;
}
double User::getBalance() {
	return balance;
}
stack<Transaction> User::getHistory() {
	return history;
}
stack<string> User::getRequests() {
	return requests;
}

void User::sendMoney(double amount, User& reciever) {
	if (balance >= amount) {
		double thisTotal = this->getBalance() - amount;
		this->setBalance(thisTotal);
		reciever.recieveMoney(amount, *this);

		Transaction sendTransac(amount, this->getUsername(), reciever.getUsername(), "send");
		this->history.push(sendTransac);
	}

}
void User::recieveMoney(double amount, User& sender) {
	double thisTotal = this->getBalance() + amount;
	this->setBalance(thisTotal);

	Transaction recieveTransac(amount, sender.getUsername(), this->getUsername(), "recieve");
	this->history.push(recieveTransac);
}

void User::requestMoney(double amount, User& reciever) {
	cout << "the user: " << this->getUsername() << ", is requesting: " << amount << endl;
	reciever.requests.push("a request from: " + this->getUsername() + ", for a money transaction.");
}
