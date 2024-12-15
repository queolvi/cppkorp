#include<iostream>
#include<cmath>
double find_geometric_mean(unsigned num_a, unsigned num_b);

int main() {

unsigned num_a = 0, num_b = 0;
std::cout << "Enter nums a and b: \n"; std::cin >> num_a >> num_b; 
std::cout << "Geometric mean of num " << num_a <<  " and num " << num_b << " == " << find_geometric_mean(num_a, num_b) << " \n";

	return 0;
}

double find_geometric_mean(unsigned num_a, unsigned num_b) {
	return std::sqrt((double)num_a * num_b);
}

