#include <iostream>

namespace TCPPPL{
	auto i = 1;
	auto d = 21.3;
	enum class Color{ red, green };
}


int main(){
	std::cout << TCPPPL::d << "\n";
	std::cout << d << "\n"; // throws error
}