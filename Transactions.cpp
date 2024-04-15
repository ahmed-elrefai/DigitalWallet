#include "Transactions.h"

Transactions::Transactions() {

	TransferAmount = 0;
	Sender = "\0";
	Recipient = "\0";
};

Transactions::Transactions(double transferA, string reciver, string sender) {

	this->TransferAmount = transferA;
	this->Sender = sender;
	this->Recipient = reciver;
};



string Transactions::getSender(){
	return Sender;
}

string Transactions::getRecipient(){
	return Recipient;
}


Transactions::~Transactions() {


}
