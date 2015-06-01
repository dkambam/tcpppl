#include <iostream>


class Vector{
public:
	Vector(int s): elem{new double[s]}, sz{s} {} // initializer list in a member func
	double& operator[](int i) { return elem[i]; }
	int size(){ return sz; }

private:
	double* elem;
	int sz;
};

double read_and_sum(int s){
	Vector v(s);
	for(int i=0; i!=v.size(); ++i){
		std::cin >> v[i];
	}

	double sum = 0;
	for(int i=0; i!=v.size(); ++i){
		sum += v[i];
	}
	return sum;
}

int main(){
	double sum = read_and_sum(5);
	std::cout << "sum: " << sum << "\n";
}