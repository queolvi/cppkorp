#include<iostream>
#include<string>
#include <algorithm> // для функции std::sort

std::string r_tr(int a, int b, int c);

int main() {

    int a = 0, b = 0, c = 0;
    std::cin >> a >> b >> c;
    std::string res = r_tr(a,b,c);
    std::cout << res;

    return 0;
}

std::string r_tr(int a, int b, int c){

    if (a > 0 && b > 0 && c > 0) {
        
        int sides[3] = {a, b, c};
        std::sort(sides, sides + 3);
        a = sides[0];
        b = sides[1];
        c = sides[2];

        if (a + b > c && a + c > b && b + c > a) {
            
            if (a * a + b * b == c * c) {
                return "YES";
            } else {
                return "UNDEFINED";
            }
        } else {
            return "UNDEFINED"; 
        }
    } else {
        return "UNDEFINED"; 
    }
}