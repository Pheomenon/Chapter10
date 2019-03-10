#include <iostream>
#include <string>
#include "Person.h"
int main() {
	{
		Person one;
		Person two("Smyhecraft");
		Person three("Dimwiddy", "Sam");
		two.Show();
		std::cout << std::endl;
		two.FormalShow();
		std::cout << std::endl;
		three.Show();
		std::cout << std::endl;
		three.FormalShow();
		std::cout << std::endl;
	}
}