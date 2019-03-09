#include <iostream>
#include <string>
#include "Person.h"
int main() {
	Person one;
	Person two("Smyhecraft");
	Person three("Dimwiddy", "Sam");
	one.Show();
	std::cout << std::endl;
	one.FormalShow();
	two.Show();
	three.Show();
}