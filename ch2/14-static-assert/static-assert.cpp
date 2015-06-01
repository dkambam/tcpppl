#include <iostream>

constexpr double C = 299792.458; // km/s (units are important)

void f(double speed){
	const int LOCAL_MAX_SPEED = 160.0 / (60 * 60); // km/hour -> km/s

	// static_assert(speed < C, "can't go that fast"); // throws error as expected
	static_assert(LOCAL_MAX_SPEED < C, "can't go that fast.\n");

	;// do something
}

int main(){
	std::cout << "nothing to print. Check source file.\n";
}