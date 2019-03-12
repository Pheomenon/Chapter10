#include <iostream>
class Move
{
public:
	Move() { x = 0; y = 0; }
	~Move() {
		std::cout << "Program was terminated !";
	}
	Move(double a, double b) {
		x = a;
		y = b;
	}
	void showmove() const {
		std::cout << "X: " << x << " Y: " << y << std::endl;
		std::cout << std::endl;
	}
	Move add(const Move& m) const {
		return Move(x + m.x, y + m.y);
	}
	//this function adds x of m to x of invoking object to get new x,
	//adds y of m to y of invoking object to get new y,creates a new
	//move object initialized to new x,y values and return it
	void reset(double a, double b) {
		x = a;
		y = b;
	}
private:
	double x;
	double y;
};
