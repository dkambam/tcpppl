#include <iostream>
using namespace std;

struct Entry{
	string name;
	int number;
};

ostream& operator<<(ostream& os, const Entry& e);

istream& operator>>(istream& is, Entry& e){
	// format {name, number}
	char ch, ch2;
	if(	is >> ch // getting a char succeeds
			&& 	ch == '{' &&  is >> ch2 &&	ch2 == '"'){
		string name;
		
		while(is.get(ch) && ch != '"')
			name += ch;

		if(cin >> ch && ch == ','){
			int number = 0;
			if(cin >> number >> ch  && ch=='}'){
				e = {name, number};
				return is; 
			}
		}
	}
	
	is.setstate(ios_base::failbit); // indicate failure on the stream
	return is;
}

int main(){
	Entry e;
	if(cin >> e){
		cout << e << '\n';
	}
}


ostream& operator<<(ostream& os, const Entry& e){
	// format: {name,Number} 
	return os << "{\"" << e.name << "\"," << e.number << '}';
}