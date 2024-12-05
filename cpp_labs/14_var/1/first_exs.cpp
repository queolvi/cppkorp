#include<iostream>
#include<cmath>


struct Triangle {
    double a, b, c; 
};

// Функция для вычисления радиуса описанной окружности
double find_circumscribed_circle_radius(const Triangle& t); 
// Функция для вычисления полупериметра треугольника
double find_perimeter(const Triangle& t); 

int main() {
    Triangle t;

    std::cout << "Enter sides of a triangle (a b c): \n"; // Приглашаем пользователя
    std::cin >> t.a >> t.b >> t.c; // Ожидаем входные данные от пользователя

     
    double radius = find_circumscribed_circle_radius(t);

   
    std::cout << "Circumscribed circle radius: " << radius << " \n";

    return 0;
}

double find_circumscribed_circle_radius(const Triangle& t) {
    // помещаем в переменную результат функции нахождения периметра
    double p = find_perimeter(t);

    // объявляем переменную 'herons_formula', инициализируем её реализацией по формуле Герона
    double herons_formula = std::sqrt(p * (p - t.a) * (p - t.b) * (p - t.c));

    // Вычисляем радиус описанной окружности по формуле: R = abc / (4 * S)
   
    if(t.a + t.b > t.c && t.a + t.c > t.b && t.b + t.c > t.a || t.a > 0 && t.b > 0 && t.c > 0) { // проверка на то, что стороны a, b и с являются сторонами треугольника и не отрицательны
	return (t.a * t.b * t.c) / (4 * herons_formula); // в корректном случае возвращается результат подсчёта радиуса описанной окружности
    } else {
    	return 1; // в некорректном исходе, возвращается -nan, если стороны не являются сторонами треугольника || возвращается 1, если стороны являются отрицательными
    }
} 

double find_perimeter(const Triangle& t) {
    // Вычисляем полупериметр
    return (t.a + t.b + t.c) / 2.0; // 2.0 используется для обеспечения вещественного деления
}

