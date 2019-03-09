#include <iostream>
#include <string>

using std::string;
class Bank
{
private:
	string name, account;
	double deposit;
	double userInput;
	
public:
	Bank();
	Bank(const std::string& name, const std::string& account, double deposit=0);
	~Bank();
	void show() const;
	void addDeposit(double num);
	void subDeposit(double num);
};




