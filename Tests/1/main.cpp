#include<iostream>

int main(){

    int x = 10, y = x = 20, z = y = 30;


    if (x + y - z){
     // 20 + 20 - 30
        std::cout << 1;
    } else if(x - y + z) {
        std::cout << 2;
    std::cout << 3;
    }
    return 0;
}