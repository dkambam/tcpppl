#include <iostream>
using namespace std;

struct Entry{
	string name;
	int number;
};

ostream& operator<<(ostream& os, const Entry& e){
	// format: {name,Number} 
	return os << '{' << e.name << ',' << e.number << '}';
}

int main(){
	Entry bob{"bob", 123};
	cout << bob << '\n';
}
