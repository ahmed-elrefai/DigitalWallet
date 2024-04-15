#include "Transactions.h"

Transactions::Transactions() {
	Balance = 0;
	TransferAmount = 0;
	Sender = "\0";
	Recipient = "\0";
};

Transactions::Transactions(double balance, double transferA, string reciver, string sender) {
	this->Balance = balance;
	this->TransferAmount = transferA;
	this->Sender = sender;
	this->Recipient = reciver;
};

double Transactions::getBalance() {
	return Balance;
}

string Transactions::getSender(){
	return Sender;
}

string Transactions::getRecipient(){
	return Recipient;
}

double Transactions::setBalance(double newBalance) {
	
	this->Balance = newBalance;
}

double Transactions::TransferMoney_As_Sender(int UserID, string reciver, string sender, double transferA) {


}

double Transactions::TransferMoney_As_Recipient(int UserID, string reciver, string sender, double transferA) {


}

Transactions::~Transactions() {


}