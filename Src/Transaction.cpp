#include "Transaction.h"

Transaction::Transaction(double amount, string senderName, string recieverName, string transacType) 
{
	this->senderName = senderName;
	this->recieverName = recieverName;
	this->amount = amount;
	this->transacType = transacType;
}

string Transaction::getSenderName() {
	return senderName;
}

string Transaction::getRecieverName() {
	return recieverName;
}

string Transaction::getTransacType() {
	return transacType;
}

double Transaction::getAmount() {
	return amount;
}