#include <iostream>
#include <string>
#include "Bank.h"

int main()
{
		using namespace std;
		string name, account;
		char userOpt;
		cout << "Enter your name: ";
		getline(cin, name);
		cout << "Enter your account number: ";
		getline(cin, account);

		Bank newUser{ name,account,0 };
		
M:		cout << "a: add your deposit" << endl
			<< "s: subtraction your deposit" << endl
			<< "Use 'a' or 's' to select options"
			<< "Enter your choise: ";
		cin >> userOpt;
		if (userOpt == 'a') {
			double add;
			cout << "How much you want to save? " << endl;
			cin >> add;
			newUser.addDeposit(add);
		}
		else if (userOpt == 's') {
			double sub;
			cout << "How much you want to get?" << endl;
			cin >> sub;
			newUser.subDeposit(sub);
		}
		else
		{
			goto M;
		}
		newUser.show();
}