#include <iostream>
#include <random>

// Функция вычисления числа Фибоначчи по модулю m
unsigned long long fib_mod(unsigned n, unsigned m) {
    if (n <= 1) return n;

    unsigned long long a = 0, b = 1, c;
    for (unsigned i = 2; i <= n; ++i) {
        c = (a + b) % m;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    // Массив модулей
    int modules[] = {2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Генерация случайных чисел
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(0, 100);

    // Вывод заголовка
    std::cout << "Fib_nums:" << std::endl;

    // Цикл по модулям
    for (int m : modules) {
        std::cout << "Mod: " << m << ": ";

        // Массив для хранения 30 элементов последовательности Фибоначчи по модулю m
        int fib_sequence[30];

        // Заполнение массива случайными числами от 0 до 100
        for (int i = 0; i < 30; ++i) {
            fib_sequence[i] = distrib(gen);
        }

        // Вывод элементов последовательности Фибоначчи по модулю m
        for (int i = 0; i < 30; ++i) {
            std::cout << fib_mod(fib_sequence[i], m) << " ";
        }

        std::cout << std::endl;
    }

    return 0;
}
