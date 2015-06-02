#include <iostream>
#include <algorithm>

class Vector{
private:
	double* elem;
	size_t sz;
public:
	Vector(std::initializer_list<double> lst); // initializer list constructor

	Vector(size_t s): elem{new double[s]}, sz{s}{
		for(int i=0; i!=s; i++) 
			elem[s] = 0;
	}

	double size() const { return sz; }
	double& operator[](int i){ return elem[i]; }

	~Vector(){
		delete[] elem;
	}
};

// initializer list constructor
Vector::Vector(std::initializer_list<double> lst): elem{new double[lst.size()]}, sz{lst.size()}{
	std::copy(lst.begin(), lst.end(), elem);
}

int main(){
	Vector v{1,2,3,4, 5, 6}; // initializing with a list

	std::cout << "# of elements: " << v.size() << "\tv: ";
	for(int i=0; i!=v.size(); i++){
		std::cout << v[i] << " ";
	}
	std::cout << "\n";
}