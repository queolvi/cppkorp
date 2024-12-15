#include <iostream>

const double PI = 3.14; 

double find_area_of_a_circle(double radius);
double find_area_of_a_ring(double radius1, double radius2);

int main() {
    double radius_1 = 0, radius_2 = 0;

    std::cout << "Enter two radiuses (R1 > R2): \n";
    std::cin >> radius_1 >> radius_2;

    if (radius_1 <= radius_2) {
        std::cerr << "Error: R1 must be greater than R2\n";
        return 1; 
    }

    std::cout << "Area of circle 1: " << find_area_of_a_circle(radius_1) << "\n";
    std::cout << "Area of circle 2: " << find_area_of_a_circle(radius_2) << "\n";
    std::cout << "Area of the ring: " << find_area_of_a_ring(radius_1, radius_2) << "\n";

    return 0;
}

double find_area_of_a_circle(double radius) {
    return PI * radius * radius; 
}

double find_area_of_a_ring(double radius1, double radius2) {
    return find_area_of_a_circle(radius1) - find_area_of_a_circle(radius2);
}



