#pragma once
#include <iostream>
#include <stack>
#include "Transaction.h"
using namespace std;
class User
{
	string username;
	string password;
	double balance;
	stack<Transaction> history;
	stack<string> requests;
	void recieveMoney(double amount, User& sender);
public:
	User();
	User(string username, string password, double balance);
	User(string username, string password, double balance, stack<Transaction>* history);
	string getUsername();
	string getPassword();
	double getBalance();
	void setUsername(string new_username);
	void setPassword(string new_password);
	void setBalance(double new_balance);
	void requestMoney(double amount, User& reciever);
	stack<Transaction> getHistory();
	stack<string> getRequests();
	void sendMoney(double amount, User& reciever);

};

