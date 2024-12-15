#include<iostream>

void iswap(double& a, double& b, double& c);

int main() {

	double a = 0, b = 0, c = 0;
	std::cout << "Enter A, B and C: \n";
	std::cin >> a >> b >> c;
	std::cout << "After foo iswap(): " << a << "  " << b << "  " << c << "  \n";
	iswap(a, b, c);
	std::cout << "After foo iswap(): " << a << "  " << b << "  " << c << "  \n";	

	return 0;
}

void iswap(double& a, double& b, double& c) {

	double temp = a;
	a = b;
	b = c;
	c = temp;


// a == b, b == c, c == a;
// 1 2 3
// 3 1 2
}
