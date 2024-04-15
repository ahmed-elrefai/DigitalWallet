#pragma once
#ifndef USER_H
#define USER_H
#include "Transactions.h"
#include <string>
#include <stack>
#include <string.h>
#include <string>


class User {
    double Balance;
    string Username;
    string Password;

public:
    stack<Transactions>* History;
    User();
    User(std::string init_username, std::string init_password, double init_balance, std::stack<Transactions>* history);
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
