// Найти расстояние между двумя точками с заданными координатами ( x 1 , y 1 ) и ( x 2 , y 2 ) на плоскости. Расстояние вычисляется по формуле sqrt( x 2 − x 1 )^2 + ( y 2 − y 1 )^2 .



#include<iostream>
#include<limits>

struct Point {
	double x, y;
};


double my_sqrt(double a);
double find_dist(const Point& p1, const Point& p2);
double my_abs_for_double(double x);
double my_pow(double base, int exp);

int main() {

Point p1, p2;

std::cin >> p1.x >> p1.y >> p2.x >> p2.y;

std::cout << "Res: " <<	find_dist(p1, p2);


	return 0;
}

double find_dist(const Point& p1, const Point& p2) {
return my_sqrt(my_pow(p2.x - p1.x, 2) + my_pow(p2.y - p1.y, 2));
}

double my_sqrt(double a) {

	if (a < 0) {
		return std::numeric_limits<double>::quiet_NaN();
	}
	if(a == 0) return 0;

	double x = a;
	double prev_x;

	while((my_abs_for_double(x - prev_x) > std::numeric_limits<double>::epsilon())
) {
		prev_x = x;
		x = 0.5 * (x + a / x);

	}

	#ifdef AAA
	do {
		prex_x = x;
		x = 0.5 * (x + a / x);
	} while (my_abs_for_double(x - prex_x) > std::numeric_limits<double>::epsilon());
	#endif

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

