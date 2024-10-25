#include <iostream>

int main() {
  int A = 0;
    std::cin >> A;
  int B = 1;
    
   if(A < B){
   B *= 2;
    if(A == B){
    std::cout << "YES";
    }
   }
    else{
    std::cout << "NO";
    }
  return 0;
}