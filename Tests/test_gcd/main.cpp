#include<iostream>


int eq_mod(int x, int y);

int gcd(int x, int y);


int main() {

std::cout << gcd(5, 15);

    return 0;
}

int gcd(int x, int y) {
    int q;
    if (y == 0) {
        return x;
    }
    q = eq_mod(x, y);
    if (q == 0) return y;
    return gcd(y, q);
}

int eq_mod(int x, int y) {
    int q = x % y;
    if (q < 0) q += abs(y);
    return q;
}
