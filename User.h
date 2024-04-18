#pragma once
#ifndef USER_H
#define USER_H
#include "Transactions.h"
#include <string>
#include <stack>
#include <string.h>
#include <string>

#include "Transactions.h"

class User {
    double Balance;
    string Username;
    string Password;

public:
    stack<Transactions>* History;
    User();
    User(string init_username, string init_password, double init_balance, stack<Transactions>* history);
    void setBalance(double newBalance);
    double getBalance();
    void sendMoney(double amount, User& reciever);
    void requestMoney(double amount, User reciever);            // not sure of it's logic
    stack<Transactions>* getHistory();
    void changePassword(string newPassword);
    void changeUserName(string newUsername);
    ~User();
};
#endif
