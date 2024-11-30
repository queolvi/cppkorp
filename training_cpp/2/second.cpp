#include<iostream>

int count_area_of_the_sq(int sq_side);

int main() {

	int sq_side = 0; std::cout << "Enter side of the square \n";
	std::cin >> sq_side;
	std::cout << "Area of the square == " << count_area_of_the_sq(sq_side);

	return 0;
}

int count_area_of_the_sq(int sq_side) {
return sq_side * sq_side;
}
