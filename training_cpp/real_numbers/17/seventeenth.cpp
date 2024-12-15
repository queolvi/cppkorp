//16  Даны три точки A, B, C на числовой оси. Найти квадраты длин отрезков AC и BC и их сумму.
//17  Даны три точки A, B, C на числовой оси. Точка C расположена между точками A и B. Найти произведение квадратов длин отрезков AC и BC.



#include<iostream>
#include<cmath>
#include<algorithm>


struct Point {
	double a, b, c;
};

int my_abs_for_int(int x);
double my_abs_for_double(double x);
double my_pow(double base, int exp);
double my_min(double a, double b);
double my_isnan(double x);
double my_max(double a, double b);
double productOfSquares (const Point& P);

int main() {

Point p;

std::cin >> p.a >> p.b >> p.c;

std::cout << productOfSquares(p);




	return 0;
}

double productOfSquares (const Point& p) {
	#ifdef AAA
	if(!((std::min(p.a , p.b) <= p.c) && (p.c <= std::max(p.a,p.b)))) {
		std::cerr << "Error! \n";
		return -1;
	} else {
	return std::pow(std::abs(p.c - p.a), 2) * std::pow(std::abs(p.c - p.b), 2);
	}
	#endif
	

//	#ifdef BBB
	if(!((my_min(p.a, p.b) <= p.c) && (p.c <= my_max(p.a, p.b)))) {
		return -1;
	} else {
		return my_pow(my_abs_for_double(p.c - p.a), 2) * my_pow(my_abs_for_double(p.c -p.b), 2);
	}

	return -1;
//	#endif
}

double my_max(double a, double b) {
        if(my_isnan(a)) {
                return b;
        } else if(my_isnan(b)) {
                return a;
        } else if(a > b) {
                return a;
        } else {
                return b;
        }
        return -1;
}

double my_isnan(double x) {
        unsigned long long bits = reinterpret_cast<unsigned long long&>(x);

        return ((bits & 0x7FF0000000000000ULL) == 0x7FF0000000000000ULL) && (bits & 0x000FFFFFFFFFFFFFULL);
}

double my_min(double a, double b) {
        if(my_isnan(a)) {
                return b;
        } else if(my_isnan(b)) {
                return a;
        } else if(a < b) {
                return a;
        } else {
                return b;
        }
        return -1;
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

int my_abs_for_int(int x) {
        return (x < 0) ? -x : x;
}

double my_abs_for_double(double x) {
        return (x < 0.0) ? -x : x;
}

