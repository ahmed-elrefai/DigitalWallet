#pragma once
#include <iostream>
#include <string>
#include <string.h>

using namespace std;

class Transactions
{
	double Balance;
	double TransferAmount;
	string Sender, Recipient;
public:
	Transactions();
	Transactions(double balance, double transferA, string reciver, string sender);
	double getBalance();
	~Transactions();
	string getSender();
	string getRecipient();
	double setBalance(double newBalance);
	double TransferMoney_As_Sender(int UserID, string reciver, string sender, double transferA);
	double TransferMoney_As_Recipient(int UserID, string reciver, string sender, double transferA);
};
