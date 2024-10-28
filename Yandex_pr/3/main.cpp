#include<iostream>
#include<string>
#include<algorithm>
#include<iomanip>
std::string output_month(int day, int amount);

int main() {

int n = 0, a = 0;
std::cin >> n >> a; 
std::cout << output_month(n, a); 
    return 0;
}

std::string output_month(int day, int amount){
    if(day >= 1 && day <= 7 && amount >= 1 && amount <= 99) { 

        // Печать заголовка
        for (int i = 0; i < day - 1; ++i) {
            std::cout << "  ";
        }

        // Печать чисел
        int num = 1; 
        for (int i = 0; i <= amount; ++i) {
            for (int j = 0; j < 7; ++j) {
                if (num <= amount && i * 7 + j + 1 >= day) {
                    std::cout << std::setw(2) << num++ << " ";
                } else {
                    std::cout << "  ";
                }
            }
            std::cout << std::endl;
        }
        return ""; // Возвращаем пустую строку
    } else {
        return "UNDEFINED";
    }
}