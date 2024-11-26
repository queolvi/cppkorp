// Даны три числа. Определить, являются ли они последовательными числами арифметичесской прогресии. Ессли да, то найти её разность.

#include<iostream>

bool is_arifmethic_progression(double num_1, double num_2, double num_3);

int main() {

double num_1 = 0, num_2 = 0, num_3 = 0;
std::cout << "Enter three numbers: \n"; std::cin >> num_1 >> num_2 >> num_3;

bool res = is_arifmethic_progression(num_1,num_2,num_3);

if(res) {
	std::cout << "Nums " << num_1 << ", " << num_2 << ", and " << num_3 << " - is arifmethic progression \n";   
} else if(!res) {
	std::cout << "Nums " << num_1 << ", " << num_2 << ", and " << num_3 << " - is not arifmethic progression \n"; 
}


	return 0;
}

bool is_arifmethic_progression(double num_1, double num_2, double num_3) {
// 1 1 
// 2 2
// 3 
#ifdef WRONG_ANWSER
	if(num_1 < num_2 < num_3 || num_2 < num_1 < num_3 ||
		num_3 < num_1 < num_2 || num_2 < num_3 < num_3 ||
		num_1 < num_3 < num_2 || num_3 < num_2 < num_1
	       &&
       		num_1 == num_2 - num_3 && num_2 == num_1	       
	) return true;
	else {
	return false;
	}
#endif
	// great if's() explonation
	// if(num_1 < num_2 < num_3 && num_1 == num_2 - num_3)
	// and next's
}

