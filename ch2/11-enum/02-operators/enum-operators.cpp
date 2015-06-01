#include <iostream>

enum class Color { Red, Green, Blue };
enum class TrafficLight { Green, Yellow, Red }; // notice no name conflict

TrafficLight& operator++(TrafficLight& l){ // prefix increment
	switch(l){
		case TrafficLight::Green: return l=TrafficLight::Yellow;
		case TrafficLight::Yellow: return l=TrafficLight::Red;
		case TrafficLight::Red: return l=TrafficLight::Green;
	}
}

int main(){
	std::cout << "nothing to print. Check source code.\n";
}