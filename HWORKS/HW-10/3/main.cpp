#include <iostream>
#include <cassert>
#include <cmath>

int gcd(int x, int y);
int eq_mod(int x, int y);
int prime_gcd(int x, int y);

int main() {
    int num_1 = 0, num_2 = 0;
    std::cout << "Enter two numbers: "; 
    std::cin >> num_1 >> num_2;

    int copy_gcd = prime_gcd(num_1, num_2); // Передаем num_1 и num_2 в функцию 
    std::cout << "Prime greatest common divisor: " << copy_gcd << std::endl; // Вывод результата

    return 0;
}

int eq_mod(int x, int y) {
    int q = x % y;
    if (q < 0) q += abs(y);
    return q;
}

int gcd(int x, int y) {
    int q;
    assert(y != 0); 
    q = eq_mod(x, y);
    if (q == 0) return y;
    return gcd(y, q);
}


int prime_gcd(int x, int y) {
    int copy_gcd_f = gcd(x, y);
    
    if (copy_gcd_f <= 1) { 
        return 1; 
    } 
    
    // Проверяем делимость на простые числа до sqrt(copy_gcd_f)
    for (int i = 2; i * i <= copy_gcd_f; ++i) {
        if (copy_gcd_f % i == 0) {
            return 1; // НОД не является простым
        }
    }
    
    return copy_gcd_f; // НОД является простым
}
