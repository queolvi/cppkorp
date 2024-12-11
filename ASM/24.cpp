#include<iostream>

bool is_positive(int n) {


n = ~n;
n >>=  31;

	return n;
}


int main() {


	for(int i = -20; i < 20; ++i) {
		std::cout << i << "\t" << is_positive(i) << "\n";
	}

	return 0;
}
