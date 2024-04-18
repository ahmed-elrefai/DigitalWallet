#ifndef USER_H
#define USER_H

#include <string>
#include <stack>
#include <iostream>

using namespace std;

class Transaction;

class User {
private:
    double Balance;
    std::string Username;
    std::string Password;
    std::stack<Transaction>* History;

public:
    User();
    User(string init_username, string init_password, double init_balance, stack<Transaction>* init_history);
    ~User();

    void setBalance(double newBalance);
    double getBalance();
    void setPassword(string newPassword);
    string getPassword();
    void setUsername(string newUsername);
    string getUsername();
    stack<Transaction>* getHistory();
    void sendMoney(double amount, User& recipient);
    void recieveMoney(double amount, User& sender);
};

#endif // USER_H
