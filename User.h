#include <iostream>
#include <stack>

using namespace std;

class Transactions{

};

class User{
    double balance;
    string username;
    string password;
    stack<Transactions> history;
public:
    User();
    User(string init_username, string init_password, double init_balance, stack<Transactions> history);
    void setBalance(double newBalance);
    double getBalance();
    void sendMoney(double amount, User reciever);
    void requestMoney(double amount, User reciever);            // not sure of it's logic
    stack<Transactions> getHistory();
    void changePassword(string newPassword);
    void changeUserName(string newUsername);
    ~User();

};