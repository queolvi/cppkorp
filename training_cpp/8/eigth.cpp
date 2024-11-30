#include<iostream>

double find_the_arifmetic_mean(double num_1, double num_2);

int main() {

double num_1 = 0, num_2 = 0; 
std::cout << "Enter two numbers: \n"; std::cin >> num_1 >> num_2;

std::cout << "Arifmetic mean of number  " << num_1 << " and number " << num_2 << " == " << find_the_arifmetic_mean(num_1, num_2) << " \n";

	return 0;
}

double find_the_arifmetic_mean(double num_1, double num_2) {
	return (num_1 + num_2) / 2;  
}
