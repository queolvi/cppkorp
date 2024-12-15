#include<iostream>

void swap(double& a, double& b);

int main() {

	double a = 0, b = 0;
	std::cin >> a >> b;
	std::cout << a << "\t" << b << "\n";
	swap(a, b);
	std::cout << a << "\t" << b << "\n";
	return 0;
}
void swap(double& a, double& b) {
	double temp = a;
	a = b;
	b = temp;
}
