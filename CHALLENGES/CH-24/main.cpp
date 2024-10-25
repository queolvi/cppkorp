#include <iostream>
#include <algorithm>

int minPairProductSum(int* arr, int size) { 
    if (size < 2) {
        return 0; 
    }

    // Сортируем массив по возрастанию
    std::sort(arr, arr + size);

    int minSum = 0;
    int i = 0; // Индекс для минимальных элементов
    int j = size - 1; // Индекс для максимальных элементов

    // Изменяем условие в цикле:
    // i < j - 1, так как мы берем пару элементов за один раз
    while (i < j - 1) { 
        minSum += arr[i] * arr[j] + arr[i + 1] * arr[j - 1]; // Суммируем произведения пар
        i += 2; // Переходим к следующей паре минимальных
        j -= 2; // Переходим к следующей паре максимальных
    }

    
    if (i == j - 1) { 
        minSum += arr[i + 1] * arr[j - 1]; 
    } else if (size == 2) {
        minSum += arr[0] * arr[1];
    }

    return minSum;
}

int main() {
    int size = 0;
    std::cout << "Enter size of the array: ";
    std::cin >> size;

    if (size < 2) {
        std::cerr << "The array size must be at least 2.\n";
        return 1;
    }

    int* arr = new int[size];
    std::cout << "Enter elements of the array: \n";
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    int minSum = minPairProductSum(arr, size);
    std::cout << "The minimum sum of all possible sums of pairs of products of elements: " << minSum << std::endl;

    delete[] arr;
    return 0;
}