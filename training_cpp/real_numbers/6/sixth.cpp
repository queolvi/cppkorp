#include<iostream>

double find_volume_of_a_rectangular_parallelepiped(double edge_a, double edge_b, double edge_c);
double find_the_surface_area_of_a_rectangular_parallelepiped (double edge_a, double edge_b, double edge_c);

int main() {


double edge_a = 0, edge_b = 0, edge_c = 0;

std::cout << " Enter edge's a, b and c of a parallelepiped: \n"; std::cin >> edge_a >> edge_b >> edge_c;
std::cout << "Parallelepiped volume: " << find_volume_of_a_rectangular_parallelepiped(edge_a, edge_b,edge_c) << " \n";
std::cout << " The surface area of a rectangular parallelepiped: " << find_the_surface_area_of_a_rectangular_parallelepiped(edge_a, edge_b, edge_c) << " \n";


	return 0;
}

double find_volume_of_a_rectangular_parallelepiped(double edge_a, double edge_b, double edge_c) {
return edge_a * edge_b * edge_c;
}
double find_the_surface_area_of_a_rectangular_parallelepiped (double edge_a, double edge_b, double edge_c) {
return (edge_a * edge_b + edge_b * edge_c + edge_a * edge_c) + (edge_a * edge_b + edge_b * edge_c + edge_a * edge_c);


}

