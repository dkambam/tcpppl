#include <iostream>
#include <stdexcept>

class Vector{
public:
	Vector(int s);
	double& operator[](int i);
	int size();
private:
	int sz;
	double *elem;
};

Vector::Vector(int s){
	if( s<0 ) throw std::length_error{"Vector"};
	elem = new double[s];
	sz = s;
}

double& Vector::operator[](int i){
	if( i<0 || size()<i ) throw std::out_of_range{"Vector::operator[]"};
	return elem[i];
}

int Vector::size(){ return sz; }



void test(){
	try{
		Vector v(-2);
	}
	catch(std::length_error e){
		std::cout << "ERROR: invalid length in " << e.what() << "\n";
	}
	catch(std::bad_alloc){
		; // handle bad alloc 
	}
}


int main(){
	test();
}