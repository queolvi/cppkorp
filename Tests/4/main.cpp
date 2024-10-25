#include <iostream>
#include<cmath>
int main() {
    int N = 0;
    std::cin >> N;
    int B = 1; // Начинаем с 1 
    
    while (B <= N){ // Условие цикла 
        std::cout << B << " "; // Выводим на экран
        B *= 2; // Увеличиваем B в два раза
    }
  return 0;
}