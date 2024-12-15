#include<iostream>

double foo(double& x);

int main() {

	double x = 0;
	std::cout << "Enter X: \n";
	std::cin >> x;
	std::cout << "After foo() "  << foo(x) << "\n"; 

	return 0;
}

double foo(double& x) {
double member_1 =  x;
double member_2 =  x;


for(int count = 0; count < 5; count++) {
	member_1 *= x;
}
for(int count = 0; count < 1; count++) {
        member_2 *= x;
}
	return (3 * member_1) - (6 * member_2) - 7;


	
	//	double second_pow_x = x * x;
//	double third_pow_x = second_pow_x * x;

//	return (3 * (third_pow_x * third_pow_x)) - (6 * second_pow_x) - 7;
}
