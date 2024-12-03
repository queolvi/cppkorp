//Даны координаты трех вершин треугольника: ( x 1 , y 1 ) , ( x 2 , y 2 ) , ( x 3 , y 3 ) . Найти его периметр и площадь, используя формулу для расстояния между двумя точками на плоскости. Для нахождения площади треугольника со сторонами a, b, c использовать формулу Герона: S = p sqrt( p − a ) ( p − b ) ( p − c ) , где p = ( a + b + c ) / 2 — полупериметр.




#include<iostream>
#include<limits>


struct Vertex {
	double x, y;
};

double find_perimeter(const Vertex& v1, const Vertex& v2, const Vertex& v3);
double find_square(const Vertex& v1, const Vertex& v2, const Vertex& v3);
double my_sqrt(double a);
double my_abs_for_double(double x);
double find_dist(const Vertex& v1, const Vertex& v2);
double my_pow(double base, int exp);
int main() {

Vertex v1, v2, v3;


	return 0;
}

double find_dist(const Vertex& v1, const Vertex& v2) {

	return my_sqrt(my_pow(v2.x - v1.x, 2) + my_pow(v2.y - v1.y, 2));
}

double find_perimeter(const Vertex& v1, const Vertex& v2, const Vertex& v3) {
	return find_dist(v1, v2) + find_dist(v2, v3) + find_dist(v3, v1);
}

double find_square(const Vertex& v1, const Vertex& v2, const Vertex& v3) {
	
	
	double a = find_dist(v1,v2);
	double b = find_dist(v2,v3);
	double c = find_dist(v3,v1);
	double* P = (a, b, c) / 2;
	return my_sqrt(P * (P - a) * (P - b) * (P - c));
}

double my_sqrt(double a) {

        if (a < 0) {
                return std::numeric_limits<double>::quiet_NaN();
        }
        if(a == 0) return 0;

        double x = a;
        double prev_x;
	#ifdef BBB
        while((my_abs_for_double(x - prev_x) > std::numeric_limits<double>::epsilon())
) {
                prev_x = x;
                x = 0.5 * (x + a / x);

        }
	#endif

//        #ifdef AAA
        do {
                prex_x = x;
                x = 0.5 * (x + a / x);
        } while (my_abs_for_double(x - prex_x) > std::numeric_limits<double>::epsilon());
//        #endif

        return x;
}

double my_abs_for_double(double x) {
        return (x < 0.0) ? -x : x;
}


double my_pow(double base, int exp) {
        if(exp < 0) {
                return 1.0 / my_pow(base, -exp); // для отрицательных, рекурсия
        } else if(exp == 0) {
                return 1.0;
        } else {
                double res = 1.0;
                for(int i = 0; i < exp; ++i) {
                        res *= base;
                }
                return res;
        }
        return -1;
}

