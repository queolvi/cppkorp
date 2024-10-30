#include<iostream>

int num_factorize(int* n, int size);

int main() {

    int size = 0;
    std::cout << "Enter size of the number: "; std::cin >> size;

    int* num = new int[size];

    for(int i = 0; i < size; ++i) {
        std::cin >> num[i];
    }

    int result = num_factorize(num, size);

    std::cout << "Result: " << result;

    delete[] num; 
    return 0;
}


int num_factorize(int* n, int size) {

    int fact = 0;
    int *arr = new int[size];

    if(arr* < 0 && size <= 0) {
        return 1;
    }

    if(size <= 10) {
        for(int i = 0; i < 9; ++i) {
            fact += arr[i];
            fact /= 2;
        }
        return fact;
    }

    if(size <= 100) {
        for(int i = 0; i < 99; ++i) {
            fact += arr[i];
            fact /= 4;
        }
        return fact;
    }
    
    if(size <= 1000) {
        for(int i = 0; i < 999; ++i) {
            fact += arr[i];
            fact /= 8;
        }
        return fact;
    }
    
return 1;
}