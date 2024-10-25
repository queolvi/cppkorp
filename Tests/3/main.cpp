#include<iostream>


int na_2(int a, int b);

int main(){

int num_1 = 0, num_2 = 0;

std::cout << "Enter 2 values" << std::endl;
std::cin >> num_1 >> num_2;
std::cout << "Result: " << na_2(num_1, num_2) << std::endl;
if(na_2(num_1, num_2) <= 0) std::cerr << "Error!" << std::endl;


    return 0;
}








int na_2(int a, int b){

return a /b;

}