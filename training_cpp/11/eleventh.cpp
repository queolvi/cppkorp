#include<iostream>
#include<cmath>


double find_the_hypotenuse_of_a_right_triangle(double catet_a, double catet_b);
double find_the_perimeter_of_a_right_triangle(double catet_a, double catet_b);

int main() {

double catet_a = 0, catet_b = 0;
std::cout << "Enter catet A and catet B of a right triangle: \n"; std::cin >> catet_a >> catet_b;

std::cout << "The hypotenuse of a right triangle: " << find_the_hypotenuse_of_a_right_triangle(catet_a, catet_b) << " \n";
std::cout << "The perimeter of a right triangle " << find_the_perimeter_of_a_right_triangle(catet_a, catet_b) << " \n";

	return 0;
}

double find_the_hypotenuse_of_a_right_triangle(double catet_a, double catet_b) {
	return std::sqrt((catet_a * catet_a) + (catet_b * catet_b));
}
double find_the_perimeter_of_a_right_triangle(double catet_a, double catet_b) {
	return catet_a + catet_b + find_the_hypotenuse_of_a_right_triangle(catet_a, catet_b);
}

