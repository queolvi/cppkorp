#include<iostream> 

int neg_or_pos(int num);


int main() {

int num = 0;
std::cout << "Enter num: "; std::cin >> num;
std::cout << "Lets check! If num positive - return 1, else 0: " << neg_or_pos(num) << " \n";
	return 0;
}

int neg_or_pos(int num) {
	num = -num;
	return (num >> 31) & 1; // арифм сдвиг вправо и маска(?) для получения результата
}
