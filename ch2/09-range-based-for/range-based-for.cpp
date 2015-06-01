#include <iostream>



int main(){	
	int v[10] {1,2,3,4,5,6,7,8,9,10};

	for(auto x: v){ // place a copy in x for every element in v
		std::cout << x << " ";
	}
	std::cout << '\n';



	for(auto &x: v){ // only reference is passed (no copy)
		std::cout << x << " ";	
	}
	std::cout << '\n';
}