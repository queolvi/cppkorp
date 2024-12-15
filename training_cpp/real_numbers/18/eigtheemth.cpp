//Даны координаты двух противоположных вершин прямоугольника:
//( x 1 , y 1 ) , ( x 2 , y 2 ) . Стороны прямоугольника параллельны осям координат. Найти периметр и площадь данного прямоугольника.

#include<iostream>


struct Vertex {
	double x, y;
};

double find_perimeter(const Vertex& v1, const Vertex& v2);
double find_square(const Vertex& v1, const Vertex& v2);
double my_abs_for_double(double x);
int main() {

Vertex v1, v2;

std::cin >> v1.x >> v1.y >> v2.x >> v2.y;

std::cout << "Perimeter: " << find_perimeter(v1,v2 ) << "\n";
std::cout << "Square: " << find_square(v1, v2) << "\n";

	return 0;
}

double find_perimeter(const Vertex& v1, const Vertex& v2 ) {
	return 2 * (my_abs_for_double(my_abs_for_double(v2.x - v1.x) + (my_abs_for_double(v2.y - v1.y))));
}
double find_square(const Vertex& v1, const Vertex& v2) {
	return my_abs_for_double(v2.x - v1.x) * my_abs_for_double(v2.y - v1.y);
}

double my_abs_for_double(double x) {
        return (x < 0.0) ? -x : x;
}

