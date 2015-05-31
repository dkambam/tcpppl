#include <iostream>
#include <complex>
#include <vector>
using namespace std; // obviates need for explicit qualification

auto b = true;
auto i = 1;
auto d {2.3};

int main(){
	cout << "auto deduces type from initializer\n";
}