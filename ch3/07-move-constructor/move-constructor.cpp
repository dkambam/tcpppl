#include <iostream>
#include <algorithm>
#include <utility>

class Vector{
public:
	Vector(): elem{nullptr}, sz{0}{}
	Vector(int s): elem{new double[s]}, sz{s} {}
	Vector(std::initializer_list<double>);
	
	Vector(Vector& v); 
	Vector& operator=(Vector& v);

	Vector(Vector&& v); // move constructor


	double& operator[](int i) { return elem[i]; }
	int size() const{ return sz; }
private:
	double* elem;
	int sz;
};

Vector::Vector(Vector&& v): elem{v.elem}, sz{v.sz}{
	std::cout << "move constructor \n";
	v.elem = nullptr;
	v.sz = 0;
}


void print(Vector& v);


/************
* 	MAIN
*************/

int main(){
	Vector v{Vector{12,3}};
	print(v);

	Vector p{1,2,4};
	Vector q = std::move(p); // explicit alternative to move constuctor
	print(p);
	print(q);

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
	std::cout << "copy constructor\n";
	sz = v.sz;
	
	elem = new double[sz];
	for(int i=0; i!=sz; i++)
		elem[i] = v.elem[i];
}


Vector& Vector::operator=(Vector& v){
	std::cout << "copy assignment\n";
	if(elem != nullptr) { delete[] elem; }

	sz = v.size();
	elem = new double[sz];
	for(int i=0; i!=v.size(); i++){
		elem[i] = v.elem[i];
	}
	
	return *this;
}	