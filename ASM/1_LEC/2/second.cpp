#include<iostream> 

int access_to_arr_el(long long* arr, int el);


int main() {
	unsigned size = 0;
	std::cout << "Enter size of the array: \n"; std::cin >> size; 
	long long* arr = new int[size];
	for(int i = 0; i < size; ++i) {
		std::cin >> arr[i];
	}
	int el = 0; 
	std::cout << "Enter the element: \n"; std::cin >> el;

	std::cout << "We find, if array have this element, we return his, if not - we return 1... " << access_to_arr_el(arr, el);

	return 0;
}

int access_to_arr_el(long long* arr, int el) {

	for(int i = 0; i < el; ++i) {
		if(arr[i] == el) {
			return i;
		} else {
			return 1;
		}
	}
	return 1;
}
