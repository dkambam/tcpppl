#include <iostream>

bool accept(){
	std::cout << "Do you want to proceed (y/n) ?\n";

	char answer = 0;
	std::cin >> answer;

	switch(answer){
		case 'y': case 'Y':
			return true;
			break;
		case 'n': case 'N':
			return false;
			break;
		default:
			std::cout << "interpreting as false.\n";
			return false;
	}
}


int main(){
	std::cout <<  (accept() ? "true" : "false" ) << '\n';
}