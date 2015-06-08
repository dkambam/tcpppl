#include <iostream>
#include <algorithm>


class Vector{
public:
	Vector(): elem{nullptr}, sz{0}{}
	Vector(int s): elem{new double[s]}, sz{s} {}
	Vector(std::initializer_list<double>);
	
	Vector(Vector& v); // copy constructor

	double& operator[](int i) { return elem[i]; }
	int size() const{ return sz; }
private:
	double* elem;
	int sz;
};

Vector::Vector(Vector& v){ // copy constructor
	sz = v.sz;
	
	delete[] elem;
	elem = new double[sz];
	for(int i=0; i!=sz; i++)
		elem[i] = v.elem[i];
}

void print(Vector& v);

int main(){
	Vector v{1,2,4};
	print(v);

	Vector z;
	z = v;  // works because copy constructor is defined
	print(z);
}


void print(Vector& v){
	std::cout << "size: " << v.size() << "    v: ";
	for(int i=0; i!=v.size(); ++i){
		std::cout << v[i] << " "; 
	}
	std::cout << "\n";
}


Vector::Vector(std::initializer_list<double> ls){
	sz = ls.size();
	elem = new double[sz];
	std::copy(ls.begin(), ls.end(), elem);
}