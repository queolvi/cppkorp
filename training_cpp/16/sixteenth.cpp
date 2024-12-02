#include <iostream>
#include <cmath> // для pow() или можно использовать *

struct Point {
    double A, B, C; // Используем double для большей точности
};

double find_square_length_of_a_segment_AC(const Point& P) {
    return pow(P.C - P.A, 2); // Квадрат расстояния между А и С
}

double find_square_length_of_a_segment_BC(const Point& P) {
    return pow(P.C - P.B, 2); // Квадрат расстояния между B и C
}

int main() {
    Point P;

    std::cout << "Enter points A, B and C from number axis: ";
    std::cin >> P.A >> P.B >> P.C;

    double AC_squared = find_square_length_of_a_segment_AC(P);
    double BC_squared = find_square_length_of_a_segment_BC(P);

    std::cout << "Squared lengths of segments AC and BC and their sum: \n";
    std::cout << "AC: " << AC_squared << "\n";
    std::cout << "BC: " << BC_squared << "\n";
    std::cout << "Their sum: " << AC_squared + BC_squared << "\n";

    return 0;
}

