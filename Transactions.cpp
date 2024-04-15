#include "Transactions.h"
#include <string>



Transactions::Transactions() {

	TransferAmount = 0;
};

Transactions::Transactions(double transferA, User& sender, User* reciver) {

	this->TransferAmount = transferA;
	Sender = &sender;
	this->Recipient = reciver;
}

Transactions::Transactions(double transferA, User* sender, User* reciver) {

	this->TransferAmount = transferA;
	Sender = sender;
	this->Recipient = reciver;
}

User Transactions::getSender(){
	return* Sender;
}

User Transactions::getRecipient(){
	return* Recipient;
}

double Transactions::getTransferA(){
	return TransferAmount;
}

Transactions::~Transactions() {


}
