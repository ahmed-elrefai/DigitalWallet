#pragma once
#include <iostream>
#include <string>
#include <string.h>

using namespace std;



class Transactions
{
	double TransferAmount;
	string Sender, Recipient;
public:
	Transactions();
	Transactions(double transferA, string reciver, string sender);
	string getSender();
	string getRecipient();
	~Transactions();
};

