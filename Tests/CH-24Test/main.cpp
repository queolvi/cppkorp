// Example program
#include <iostream>
 
 

 
void func(int *arr, int size, int *summ, int *mult)
{
    for (int i = 0; i < size; i++)
    {
        *summ += *(arr + i);
    }
    std::cout << "Sum: " << *summ << std::endl;
    for (int j = 0; j < size; j++)
    {
        *mult *= (*arr + j);
    }
    std::cout << "Mult: " << *mult << std::endl;
}
 
int main()
{
    srand(time(0));
    int size = 0;
    std::cin >> size;




    int* arr = new int[size];
for(int i = 0; i < size; ++i){
std::cin >> arr[i];
}
    int summ = 0, multi = 1;
    int *psumm = &summ;
    int *pmulti = &multi;
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100;
    }
    int *pa = &arr[0];
    func(pa, size, psumm, pmulti);
}