#ifndef TRANSACTION_H
#define TRANSACTION_H

#include "User.h"

class Transaction {
private:
    double TransferAmount;
    User Sender;
    User Recipient;
    string TransacType;

public:
    Transaction();
    Transaction(double transferA, User sender, User receiver, std::string transacType);

    User getSender();
    User getRecipient();
    double getTransferA();
    string getTransacType();
    ~Transaction();
};

#endif // TRANSACTION_H
