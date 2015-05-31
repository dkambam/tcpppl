#include <iostream>
using namespace std; // obviates need for explicit qualification

double square(double x){
	return x * x;
}

void print_square(double x){
	cout << "square of " << x << " is " << square(x) << "\n";
}


int main(){
	print_square(1.41);
}