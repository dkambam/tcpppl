#include <iostream>

template <typename T>
void g(T x){
	std::cout << x << " ";
}

void f(){}

template <typename T, typename... Tail>
void f(T head, Tail... tail){
	g(head);
	f(tail...);
}


int main(){
	std::cout << "first: ";
	f(1,3.3, "what");
	std::cout << "\n";



	std::cout << "second: ";
	f("The", 1, "green", 2.4, "fox");
	std::cout << "\n";

}
