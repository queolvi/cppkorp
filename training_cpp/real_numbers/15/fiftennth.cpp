#include <iostream>
#include <cmath> // для использования abs()

struct Point {
    int x, y;
};

int find_distance_2_points(Point p1, Point p2);

int main() {
    Point x1, x2;

    std::cout << "Enter x-coordinate for Point 1: ";
    std::cin >> x1.x;
    std::cout << "Enter x-coordinate for Point 2: ";
    std::cin >> x2.x;


    std::cout << "Distance between 2 points == " << find_distance_2_points(x1, x2) << " \n";
    return 0;
}

int find_distance_2_points(Point p1, Point p2) {
    return std::abs(p2.x - p1.x); // используем abs для модуля разницы
}

