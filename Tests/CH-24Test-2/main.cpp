#include <iostream>
#include <algorithm>
#include <cassert>
#include <functional>
 #include<numeric>
void foo(const int * const arr, const size_t n, int * const sum, int * const mult)
{
    assert(arr && sum && mult && "One of parameters are null");
    
    *sum  = std::accumulate(arr, arr + n, 0, std::plus<int>());
    *mult = std::accumulate(arr, arr + n, 1, std::multiplies<int>());
}
 
int main()
{
    constexpr size_t size = 4;
    constexpr int arr[size]{ 5, 4, 2, 3 };
    const int * const ptr = arr;
    int sum;
    int mult;
    
    foo(ptr, size, &sum, &mult);
    
    std::cout
        << "sum: "  << sum  << "\n"
        << "mult: " << mult << "\n";
}