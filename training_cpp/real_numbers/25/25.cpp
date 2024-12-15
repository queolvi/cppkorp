#include<iostream>

double foo(double& x);

int main() {

	double x = 0;
	std::cout << "Enter x for foo() : \n";
	std::cin >> x;
	std::cout << "After foo() : " << foo(x) << "\n";

	return 0;
}

double foo(double& x) {

	double member_1 = x - 3;
	double member_2 = x - 3;

	for(double count = 0; count < 5; ++count) {
		member_1 *= x;
	}

	for(double count = 0; count < 2; ++count) {
		member_2 *= x;
	}

	return (4 * member_1) - (7 * member_2) + 2;
}
