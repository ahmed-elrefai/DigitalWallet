#include "User.h"
#include "Transaction.h"
#include <iostream>

using namespace std;

User::User() {
    this->Username = "username";
    this->Password = "password";
    this->Balance = 0;
    this->History = new stack<Transaction>;
}

User::User(string username, string password, double balance, stack<Transaction>* history) {
    this->Username = username;
    this->Password = password;
    this->Balance = balance;
    if (history != nullptr) {
        this->History = new stack<Transaction>(*history);
    }
    else {
        this->History = new stack<Transaction>();
    }
}

stack<Transaction>* User::getHistory() {
    if (this->History == nullptr) {
        cout << "History is Empty!" << endl;
        return nullptr;
    }

    stack<Transaction> historyCopy = *this->History;

    while (!historyCopy.empty()) {
        if (historyCopy.top().getTransacType() == "send") {
            cout << "You -> " << historyCopy.top().getRecipient().getUsername()
                << " (" << historyCopy.top().getTransferA() << ")" << endl;
        }
        else if (historyCopy.top().getTransacType() == "receive") {
            cout << historyCopy.top().getSender().getUsername()
                << " -> You (" << historyCopy.top().getTransferA() << ")" << endl;
        }
        else {
            cout << "This must be a typo or an unknown transaction type!" << endl;
        }
        historyCopy.pop();
    }

    return this->History;
}

void User::setBalance(double newBalance) {
    this->Balance = newBalance;
}

double User::getBalance() {
    return this->Balance;
}

void User::setPassword(string newPassword) {
    this->Password = newPassword;
}

void User::setUsername(string newUsername) {
    this->Username = newUsername;
}

string User::getUsername() {
    return this->Username;
}

string User::getPassword() {
    return this->Password;
}

void User::sendMoney(double amount, User& recipient) {
    if (this->Balance >= amount) {
        cout << "test 1.1 Done!" << endl;
        Transaction* sendTransaction = new Transaction(amount, *this, recipient, "send");
        cout << "test 1.2 Done!" << endl;
        this->setBalance(this->getBalance() - amount);
        cout << "test 1.3 Done!" << endl;
        recipient.recieveMoney(amount, *this);  // Fixed the parameter
        cout << "test 1.4 Done!" << endl;
        if (this->History == nullptr || this->History->size() == 0) {
            this->History = new stack<Transaction>();
        }
        this->History->push(*sendTransaction);
    }
    else {
        cout << "Insufficient funds!" << endl;
    }
}

void User::recieveMoney(double amount, User& sender) {
    cout << "test 1.3.1 Done!" << endl;
    cout << "the size of the history is:" << History->size() << endl;
    if (this->History == nullptr || this->History->size() == 0) {
        cout << "test 1.3.2 Done!" << endl;
        cout << "History is Empty!" << endl;
        cout << "test 1.3.3 Done!" << endl;
        this->History = new stack<Transaction>();
        cout << "test 1.3.4 Done!" << endl;
    }

    cout << "test 1.3.5 Done!" << endl;
    Transaction recieveTransaction(amount, sender, *this, "receive");
    cout << "test 1.3.6 Done!" << endl;
    this->setBalance(this->getBalance() + amount);
    cout << "test 1.3.7 Done!" << endl;
    this->History->push(recieveTransaction);
}

User::~User() {
    delete History;
}

