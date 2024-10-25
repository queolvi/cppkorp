#include<iostream>


int main(){


unsigned a=0 , b=0;
std::cin >> a >> b;
if(a > 0 && b > 0) 
{
    unsigned c = a / b;
    unsigned d = a % b;
    std::cout << c << "." << d;
}


    return 0;
}