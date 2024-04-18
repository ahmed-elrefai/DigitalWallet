#include <iostream>
#include "User.h"
#include "Transaction.h"
using namespace std;

int main() {
	User u1("usr1", "123", 1500);
	User u2("usr2", "123", 1100);
	

	u2.requestMoney(200, u1);
	u1.requestMoney(500, u2);
	u1.sendMoney(200 ,u2);
	
	Transaction last_u1 = u1.getHistory().top();
	Transaction last_u2 = u2.getHistory().top();

	cout << u1.getUsername() << "-------" << endl;
	cout <<"username: " << u1.getUsername() << endl;
	cout << "history: " << last_u1.getSenderName() << "->" << last_u1.getRecieverName()
		<< "(" << last_u1.getAmount() << ")" << endl;
	cout << "Inbox: " << u1.getRequests().top() << endl;

	cout << u2.getUsername() << "-------" << endl;
	cout << "username: " << u2.getUsername() << endl;
	cout << "history: " << last_u2.getSenderName() << "->" << last_u2.getRecieverName()
		<< "(" << last_u2.getAmount() << ")" << endl;
	cout << "Inbox: " << u2.getRequests().top() << endl;
	return 0;
}
