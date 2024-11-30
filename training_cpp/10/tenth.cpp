#include<iostream>

double sum_of_squares(double num_1, double num_2);
double difference_of_squares(double num_1, double num_2);
double product_of_squares(double num_1, double num_2);
double quotient_of_squares(double num_1, double num_2);


int main() {

double num_1 = 0, num_2 = 0;
std::cout << "Enter two non-zero nums: \n"; std::cin >> num_1 >> num_2;

std::cout << "Sum of squares of a number " << num_1 << " and " << num_2 << " == " << sum_of_squares(num_1, num_2) << " \n";

std::cout << "Difference of squares of a number " << num_1 << " and " << num_2 << " == " << sum_of_squares(num_1, num_2) << " \n";

std::cout << "Product of squares of a number " << num_1 << " and " << num_2 << " == " << product_of_squares(num_1, num_2) << " \n";

std::cout << "Quotinent of squares of a number " << num_1 << " and " << num_2 << " == " << quotient_of_squares(num_1, num_2) << " \n";


	return 0;
}

double sum_of_squares(double num_1, double num_2) {
	return (num_1 * num_1) + (num_2 * num_2);
}
double difference_of_squares(double num_1, double num_2) {
	return (num_1 * num_1) - (num_2 * num_2);
}
double product_of_squares(double num_1, double num_2) {
	return (num_1 * num_1) * (num_2 * num_2);

}
double quotient_of_squares(double num_1, double num_2) {
	return (num_1 * num_1) / (num_2 * num_2);
}

