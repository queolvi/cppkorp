#include<iostream>

int find_greatier_num(int a, int b);

int main() {

	int a = 0, b = 0; 
	std::cout << "Enter two nums: "; std::cin >> a >> b;
	std::cout << "Greatier num: " << find_greatier_num(a, b) << " \n";

	return 0;
}


int find_greatier_num(int a, int b) {
	
	if(a > b) {
		return a;
	} else if (b > a) {
		return b;
	} else {
		return 0;
	}
	return 0;
}
