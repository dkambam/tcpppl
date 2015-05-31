#include <iostream>
#include <complex>
#include <vector>
using namespace std; // obviates need for explicit qualification

double d1 = 1.1;
double d2 {3.5};

complex<double> z1 {d1,d2};
vector<int> i {1,2,3,4,5};


int main(){
	cout << "Check code for use of initializer lists\n";
}