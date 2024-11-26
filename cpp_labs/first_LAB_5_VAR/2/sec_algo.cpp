// Даны три числа. Определить, являются ли они последовательными числами арифметичесской прогресии. Ессли да, то найти её разность.

#include <cmath> 
#include <iostream> 
using namespace std; 
int main() { 
    const size_t n = 3; 
    cout << ">>> "; 
    double box[n]{}; 
    for (auto& x : box) cin >> x; 
    bool flag = true; 
    auto sub = box[1] - box[0]; 
    for (size_t i = 2; i < n; ++i) { 
        auto next = box[i] - box[i - 1]; 
        if (fabs(sub - next) > 1e-12) { 
            flag = false; 
            break; 
        } 
    } 
    if (flag) cout << "YES " << sub << '\n'; 
    else puts("NO"); 
}

