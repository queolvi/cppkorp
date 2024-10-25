/*
#include<iostream>
#include<algorithm>
int ret_max_val(int& num_1, int& num_2, int& num_3);

int main(){

int num_1 = 0, num_2 = 0, num_3 = 0;
std::cout << "Enter 3 numbers:" << std::endl;
std::cin >> num_1 >> num_2 >> num_3;
std::cout << "Values before calculating: " << num_1 << num_2 << num_3 << std::endl; 
std::cout << "Values after calculating: " << ret_max_val(num_1, num_2, num_3);

    return 0;
}

int ret_max_val(int& num_1, int& num_2, int& num_3){

int sort_vals[] = {num_1, num_2, num_3};
std::sort(sort_vals, sort_vals + 3);
num_1 = sort_vals[0];
num_2 = sort_vals[1];
num_3 = sort_vals[2];



return num_1 * (num_2 + num_3);
}
*/