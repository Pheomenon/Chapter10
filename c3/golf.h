#include <iostream>
#include <string>
using std::string;
class Golf
{
private:
	struct golf
	{
		string fullname;
		int handicap;
	};
public:
	
	//function displays contents of golf structure
	void showgolf(const golf* gpt) {
		using std::cout;
		using std::endl;
		cout << "Name: " << gpt->fullname << endl;
		cout << "Handicap: " << gpt->handicap << endl;
	}

	Golf(string name, int hc) {
		golf* gpt = new golf;
		gpt->fullname = name;
		gpt->handicap = hc;
		showgolf(gpt);
	}
	//interactive version:
	//function solicits name and handicap from user
	//and sets the member of g to the values entered
	Golf() {
		using std::cin;
		using std::cout;
		using std::endl;
		string name;
		int hc;
	M:	cout << "Enter your name: " << endl;
		cin >> name;
		cout << "Enter your handicap: " << endl;
		cin >> hc;
		if (name != "\0" && hc != '\0')
			Golf(name, hc);
		else
		{
			cout << "Please try again!";
			goto M;
		}
	}

	~Golf();
};











