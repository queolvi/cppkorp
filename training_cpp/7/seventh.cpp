#include<iostream>


double find_length_of_a_circle(double const PI, double radius);
double find_area_of_a_circle(double const PI, double radius);


int main() {

double const PI = 3.14;
double radius = 0; 
std::cout << "Enter radius of a circle: \n"; std::cin >> radius; 

std::cout << "Length of a circle: " << find_length_of_a_circle(PI, radius) << " \n"; 
std::cout << "Area of a circle: "  << find_area_of_a_circle(PI, radius) << " \n";

	return 0;
}

double find_length_of_a_circle(double const PI, double radius) {
	return (PI + PI) * (radius * radius);
}
double find_area_of_a_circle(double const PI, double radius) {
	return PI * (radius * radius);
}





// начал в 4 в 16:45 конец
