#include <iostream>
#include <stdexcept>

int main(){
	try{
		// your code
	}
	catch(std::out_of_range& e){
		std::cerr << "ERROR: " << e.what() << " subscript out of range\n";
	}
	catch(...){
		std::cerr << "unknown exception in main.\n";
	}
}

