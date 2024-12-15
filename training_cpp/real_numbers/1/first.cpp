#include<iostream>

int triangle_side(int side);

int main() {

	int side = 0; std::cout << "Enter side of the triangle: \n";
       	std::cin >> side;
	std::cout << "Perimeter == " << triangle_side(side);
	return 0;
}

int triangle_side(int side) {
return side * 4;
}
