#include <iostream>
#include <map>
#include <string>

using std::string;
using std::map;

int main(){
	map<string, int> phoneBook;

	std::cout << phoneBook["Kdr"] << "\n"; // adds an entry if key not found
}

