#include <iostream>

class Vector{
private:
	double* elem;
	int sz;
public:
	Vector(int s): elem{new double[s]}, sz{s}{
		for(int i=0; i!=s; i++) 
			elem[s] = 0;
	}

	double size() const { return sz; }
	double& operator[](int i){ return elem[i]; }

	~Vector(){
		delete[] elem;
	}
};


int main(){
	std::cout << "nothing to print. Check source file.\n";

}