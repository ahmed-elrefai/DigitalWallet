#include <iostream>
#include "User.h"
#include <stack>

using namespace std;
 
int main() {
    User usr1("user1", "123", 1200, nullptr);
    User usr2("user2", "456", 1000, nullptr);
    cout << "test 1.0 Done!" << endl;
    usr1.sendMoney(100, usr2);
    cout << "test 2 Done!" << endl;
    cout << "Balance of " << usr1.getUsername() << ": " << usr1.getBalance() << endl;
    cout << "Balance of " << usr2.getUsername() << ": " << usr2.getBalance() << endl;
    cout << "test 3 Done!" << endl;

    return 0;
}
