#include<iostream>

double find_length_for_circle(double diameter, const double PI);

int main() {
	
	const double PI = 3.14;
	double diameter = 0;
	std::cout << "Enter diameter of the circle: "; std::cin >> diameter;
	std::cout << "Length of a circle: " << find_length_for_circle(diameter, PI);  

return 0;
}

double find_length_for_circle(double diameter, const double PI) {
	return PI * diameter;
}

