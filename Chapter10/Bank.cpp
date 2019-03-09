#include <iostream>
#include <string>
#include "Bank.h"

Bank::Bank() {
	std::cout << "Defult construct called\n";
	name = "no name";
	account = "no account number";
	deposit = 0.0;
}

Bank::Bank(const std::string& m_name, const std::string& m_account, double m_deposit) {
	std::cout << "Constructor using" << name << " called\n";

	if (m_deposit < 0) {
		std::cout << "You can't enter a negative number";
		deposit = 0;
	}
	else
	{
		name = m_name;
		account = m_account;
		deposit = m_deposit;
		std::cout << "Now your account's name is " << name << "\n";
		std::cout << "Your account number is " << account << "\n";
		std::cout << "Deposit is " << deposit << "\n";
	}
}

void Bank::addDeposit(double num) {
	if (num < 0)
		std::cout << "You can't enter enter a negative number";
	else
		deposit += num;
}

void Bank::subDeposit(double num) {
	if (num < 0)
		std::cout << "You can't enter enter a negative number";
	else
		deposit -= num;
}

void Bank::show() const {
	using std::cout;
	using std::endl;
	using std::ios_base;
	ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
	std::streamsize prec = cout.precision(3);

	cout << "Your account name: " << name << endl;
	cout << "Your account number: " << account << endl;
	cout << "Your deposit: $" << deposit << endl;

	//restore original format
	cout.setf(orig, ios_base::floatfield);
	cout.precision(prec);
}

Bank::~Bank()
{
	std::cout << "END!";
}
