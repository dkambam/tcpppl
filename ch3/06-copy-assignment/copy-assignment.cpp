#include <iostream>
#include <algorithm>


class Vector{
public:
	Vector(): elem{nullptr}, sz{0}{}
	Vector(int s): elem{new double[s]}, sz{s} {}
	Vector(std::initializer_list<double>);
	
	Vector(Vector& v); 
	Vector& operator=(Vector& v); // copy assignment

	double& operator[](int i) { return elem[i]; }
	int size() const{ return sz; }
private:
	double* elem;
	int sz;
};

Vector& Vector::operator=(Vector& v){
	std::cout << "copy assignment\n";
	if(elem != nullptr) { delete[] elem; }

	for(int i=0; i!=v.size(); i++){
		elem[i] = v.elem[i];
	}

	sz = v.size();
	return *this;
}	

void print(Vector& v);

int main(){
	Vector v{1,2,4};
	print(v);

	Vector z(v); 
	print(z);

	Vector r = z; // works because copy constructor is defined

	Vector t{22,33};
	r = t; // copy assignment at work
	print(r);

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

Vector::Vector(Vector& v){
	// std::cout << "copy constructor\n";
	sz = v.sz;
	
	elem = new double[sz];
	for(int i=0; i!=sz; i++)
		elem[i] = v.elem[i];
}