#include "Transaction.h"

Transaction::Transaction() {}

Transaction::Transaction(double transferA, User sender, User receiver, std::string transacType)
    : TransferAmount(transferA), Sender(sender), Recipient(receiver), TransacType(transacType) {
}

User Transaction::getSender() {
    return Sender;
}

User Transaction::getRecipient() {
    return Recipient;
}

double Transaction::getTransferA() {
    return TransferAmount;
}

string Transaction::getTransacType() {
    return TransacType;
}

Transaction::~Transaction() {}
