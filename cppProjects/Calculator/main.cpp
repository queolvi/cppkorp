#include<iostream>



int main(){

int num_1 = 0, num_2 = 0;
double res = 0.0;
char op = 0;
std::cin >> num_1 >> num_2;
std::cin >> op;

switch (op) {

case '+': {
    res = num_1 + num_2;
    break;
    } 
case '-': { 
    res = num_1 - num_2;
    break;
}
case '*': {
 res = num_1 * num_2;
 break; 
}
case '/': { 
    if(num_2 != 0) {
        res = (double)num_1 / (double)num_2;
    } else{
        std::cout << "Error" << std::endl;
    }
    break;
}
default: 
res = 0;
std::cout << "Error!!! Invalid input!!! ";
return 1;
}

std::cout << res;
}