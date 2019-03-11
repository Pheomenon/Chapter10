#include "Sales.h"
#include <iostream>
#include <array>
#include <cmath>
#include <stdlib.h>
#include <time.h>
int main() {
	{
	using std::cout;
	using std::cin;
	using std::rand;
	srand((unsigned)time(NULL));
	int count = 0;
	double ar[SALES::QUARTERS];
	for (int i = 0; i < SALES::QUARTERS; i++) {
		ar[i] = rand();
	}

	SALES::Sales s0{ s0, ar, count };
	SALES::Sales s1{ s1 };
	}
}