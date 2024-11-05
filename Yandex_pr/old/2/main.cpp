#include<iostream>
#include<string>

std::string leap(int num);
int ab_ob(int month, int year); // Изменяем тип возвращаемого значения на int
int main() {

   int month = 0, year = 0;
   std::cin >> month >> year; 
   std::cout << ab_ob(month, year); 

    return 0;
}

std::string leap(int num) {
    if (num > 0 && num <= 10000) {  
        if (num % 400 == 0) {
            return "YES";
        } else if (num % 100 == 0) {
            return "NO";
        } else if (num % 4 == 0) {
            return "YES";
        } else {
            return "NO";
        }
    } else {
        return "NO";
    }
}

int ab_ob(int month, int year) { 
    std::string leap_year = leap(year); // Вызываем функцию leap()

    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        return 31;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    } else if (month == 2 && leap_year == "YES") { // Проверяем високосный год
        return 29;
    } else if (month == 2 && leap_year == "NO") {
        return 28;
    } else {
        return 0; // Некорректный номер месяца
    }
}