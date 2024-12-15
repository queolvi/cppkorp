#include<iostream>


int count_area(int side_a, int side_b);
int count_perimeter(int side_a, int side_b);

int main() {

	int side_a = 0, side_b = 0; std::cout << "Enter size A and B of the rectangle: ";
	std::cin >> side_a >> side_b;

	std::cout << "Area of a rectangle: " << count_area(side_a, side_b) << " \n";  
	std::cout << "Perimeter of a rectangle: " << count_perimeter(side_a, side_b) << " \n";

return 0;
}


int count_area(int side_a, int side_b) {
	return side_a * side_b;
}
int count_perimeter(int side_a, int side_b) {
	return 2*(side_a + side_b);
}

