#include <iostream>
#include "Move.h"

int main()
{
	{
		std::cout << "The first place:\n";
		Move m1(1.1, 3.3);
		Move m2(4.2, 2.0);
		Move m3(-2.2, -4.0);
		m1.showmove();

		std::cout << "Move m2:\n";
		m1.add(m2).showmove();
		std::cout << "Then move m3:\n";
		m1.add(m2).add(m3).showmove();

		std::cout << "Place reset:\n";
		m1.reset(0, 0);
		m1.showmove();
		return 0;
	}
}