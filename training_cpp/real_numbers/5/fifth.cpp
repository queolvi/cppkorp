#include<iostream>

double find_square_volume(double cube_edge_volume);
double find_surface_area_of_a_cube(double cube_edge_volume);
int main() {

	double cube_edge_length = 0;
	std::cout << "Enter cube edge length: "; std::cin >> cube_edge_length; std::cout << " \n";
	std::cout << "Volume of the cube: " << find_square_volume(cube_edge_length); std::cout << " \n";
	std::cout << "Surface area of a cube: " << find_surface_area_of_a_cube(cube_edge_length); std::cout << " \n";


	return 0;
}


double find_square_volume(double cube_edge_volume) {
	return cube_edge_volume * 3;
}
double find_surface_area_of_a_cube(double cube_edge_volume) {
	return (cube_edge_volume * 6) + (cube_edge_volume * 6);
}

