#include<iostream>

void swap(double& a, double& b, double& c);

int main() {

	double a = 0, b = 0, c = 0;
	std::cout << "Enter A, B and C for foo swap() : \n";
	std::cin >> a >> b >> c;
	std::cout << "Before foo swap() " << a << "  " << b << "  " << c << "  \n";
	swap(a, b, c);
	std::cout << "After foo swap() " << a << "  " << b << "  " << c << "  \n";



	return 0;
}

void swap(double& a, double& b, double& c) {

	double temp = a; 
	a = c;
	c = b;
	b = temp;

	// a = c, c = b, b = a
	// 1 2 3
	// 2 3 1
}
