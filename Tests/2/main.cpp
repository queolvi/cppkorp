#include<iostream>

int main(){
#ifdef AAA
int num = 1;
while (num < 10){
    std::cout << "1/n" << std::endl;
    num *= 2;
}
std::cout << num;
#endif
int i = 1;
do {
i *= 2;
}while (i < 10);
std::cout << i;
    return 0;
}