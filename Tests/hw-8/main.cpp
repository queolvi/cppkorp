#include<iostream>

long long fib_nun(long long n, long long m);

int main() {

long long n, m;

std::cout << "Enter the Fib number:\n";
std::cin >> n; 

std::cout << "Enter the mod for dib num:\n";
std::cin >> m;
std::cout << "Last num of fib num: " << fib_nun(n, m);
    return 0;
}



 long long fib_nun(long long n, long long m){

if (n <= 1) return n;

    long long* f = new long long[n + 1];   
f[0] = 0;
f[1] = 1;

for(int i = 2;i <= n; ++i) f[i] = (f[i - 1] + f[i - 2]) % m;

long long result = f[n];
delete [] f;
return result;
    
}
