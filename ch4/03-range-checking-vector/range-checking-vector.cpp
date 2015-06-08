#include <iostream>
#include <vector>
#include <stdexcept>

template <typename T>
class Vec: public std::vector<T>{
public:
	using std::vector<T>::vector; // use all constructors from vector<T>

	T& operator[](int i){
		return std::vector<T>::at(i);
	}

	const T& operator[](int i)const{
		return std::vector<T>::at(i);
	}
};

int main(){
	Vec<int> v{1,2,4};
	for(auto x:v){
		std::cout << x << " "; 
	}
	std::cout << "\n";

	try{
		v[5]; // out of range!
	}
	catch(std::out_of_range& e){
		std::cerr << "ERROR: " << e.what() << " subscript out of range\n";
	}
}

