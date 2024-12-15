#include <iostream>
#include <cmath>

const double PI = 3.14;

double find_radius(double s);
double find_diameter(double radius);
double find_length(double radius);

int main() {
    double s = 0;
    std::cout << "Enter the area of the circle (s): "; std::cin >> s;

    if (s <= 0) {
        std::cerr << "Error: Area must be positive.\n";
        return 1; // Возвращаем код ошибки
    }

    double radius = find_radius(s);
    double diameter = find_diameter(radius);
    double length = find_length(radius);

    std::cout << "Radius: " << radius << " \n";
    std::cout << "Diameter: " << diameter << " \n";
    std::cout << "Length of the circumference: " << length << " \n";

    return 0;
}

double find_radius(double s) {
    return std::sqrt(s / PI);
}

double find_diameter(double radius) {
    return 2 * radius;
}

double find_length(double radius) {
    return 2 * PI * radius;
}

