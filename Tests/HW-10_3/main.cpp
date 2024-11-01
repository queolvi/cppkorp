#include <iostream>

int gcd(int a, int b);
bool isPrime(int num);
int findNextPrimeGCD(int a, int b);
// Функция для проверки, является ли число простым
bool isPrime(int num) {
  if (num <= 1) return false; // 0 и 1 не являются простыми
  for (int i = 2; i * i <= num; ++i) {
    if (num % i == 0) return false; // Если делится нацело, не простое
  }
  return true; // Если дошли до сюда, значит простое
}

// Функция для нахождения следующего НОД, являющегося простым числом
int findNextPrimeGCD(int a, int b) {
  int gcdResult = gcd(a, b); // Найдем НОД

  // Проверяем, является ли текущий НОД простым
  while (!isPrime(gcdResult)) {
    // Если нет, находим НОД для текущего НОД и исходных чисел
    gcdResult = gcd(gcdResult, gcd(a, b)); 
  }

  return gcdResult;
}

int gcd(int a, int b) {
  while (b != 0) {
    int temp = b;
    b = a % b;
    a = temp;
  }
  return a;
}

int main() {
  int num1, num2;

  std::cout << "Введите первое число: ";
  std::cin >> num1;

  std::cout << "Введите второе число: ";
  std::cin >> num2;

  int result = findNextPrimeGCD(num1, num2); // Находим следующий НОД, являющийся простым

  std::cout << "Наибольший общий простой делитель: " << result << std::endl;

  return 0;
}