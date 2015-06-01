#include <iostream>

constexpr double square(double x) { return x*x; }
const int dmv = 17; // why does it throw an error when it's double ?
constexpr double max1 = 1.4*square(dmv);


int main(){
	std::cout << "Nothing to show. Check source code..\n";
}