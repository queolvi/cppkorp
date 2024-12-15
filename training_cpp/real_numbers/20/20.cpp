#include<iostream>
#include<cmath>

struct Point{
    double x, y;
};

struct Triangle{
    double a, b, c;
};

double find_distance(const Point& p1, const Point& p2);
double find_perimeter(const Triangle& t);
double find_area(const Triangle& t);

int main() {
    Point p1, p2, p3;
    std::cout << "Enter coordinates of the triangle vertices: (x1;y1), (x2;y2), (x3;y3) \n";
    std::cin >> p1.x >> p1.y >> p2.x >> p2.y >> p3.x >> p3.y;

    Triangle t;
    t.a = find_distance(p1, p2);
    t.b = find_distance(p2, p3);
    t.c = find_distance(p3, p1);

    std::cout << "Perimeter: " << find_perimeter(t) << "\n";
    std::cout << "Area: " << find_area(t) << "\n";

    return 0;
}

double find_distance(const Point& p1, const Point& p2) {
    return std::sqrt(std::pow(p2.x - p1.x, 2) + std::pow(p2.y - p1.y, 2));
}

double find_perimeter(const Triangle& t) {
    return (t.a + t.b + t.c);
}

double find_area(const Triangle& t) {
    double p = find_perimeter(t) / 2;
    return std::sqrt(p * (p - t.a) * (p - t.b) * (p - t.c));
}

