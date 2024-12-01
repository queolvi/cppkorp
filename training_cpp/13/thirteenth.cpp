#include <iostream>


const double PI = 3.14;

double find_radius(double length);
double find_area_of_a_circle(double radius); 

int main() {
    double length = 0;
    std::cout << "Enter length: ";
    std::cin >> length;

    double radius = find_radius(length);
    std::cout << "Radius == " << radius << "\n";
    std::cout << "Area of a circle == " << find_area_of_a_circle(radius) << "\n";
    return 0;
}

double find_radius(double length) {
    return length / (2 * PI); 
}

double find_area_of_a_circle(double radius) {
    return PI * radius * radius; 
}





