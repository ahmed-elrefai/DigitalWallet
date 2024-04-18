#pragma once
#include <iostream>

using namespace std;
class Transaction
{
	double amount;
	string senderName;
	string recieverName;
	string transacType;
public:
	Transaction(double amount, string sender, string reciever, string transacType);
	string getSenderName();
	string getRecieverName();
	string getTransacType();
	double getAmount();
};

