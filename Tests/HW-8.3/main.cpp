#include <iostream>

long long fib_mod(long long n, long long m) {
  if (n <= 1) {
    return n;
  }
  long long* f = new long long[n + 1]; // Динамическое выделение памяти
  f[0] = 0;
  f[1] = 1;
  for (int i = 2; i <= n; ++i) {
    f[i] = (f[i - 1] + f[i - 2]) % m;
  }
  long long result = f[n];
  delete[] f; // Освобождение памяти
  return result;
}

int main() {
  long long n, m;
  std::cout << "Enter fib num: ";
  std::cin >> n;
  std::cout << "Enter mod : ";
  std::cin >> m;
  std::cout << "n-th Fibonacci number modulo m: " << fib_mod(n, m) << std::endl;
  return 0;
}
