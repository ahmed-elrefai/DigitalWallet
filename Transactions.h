#pragma once
#ifndef TRANSACTIONS_H
#define TRANSACTIONS_H
#include <iostream>
#include <string>
#include <string.h>
#include <stack>

#include "User.h"




using namespace std;

class User;

class Transactions
{
	double TransferAmount;
	User* Sender;
	User* Recipient;
public:
	Transactions();
	Transactions(double transferA, User* sender, User* reciver);
	Transactions(double transferA, User& sender,  User* rescipient);
	User getSender();
	User getRecipient();
	double getTransferA();
	~Transactions();
};

#endif
