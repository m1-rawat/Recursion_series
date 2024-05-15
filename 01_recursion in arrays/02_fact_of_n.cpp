#include <iostream>
using namespace std;


// Factorial of n numbers using Recursion

int fact(int n){
    if (n==1)
    {
        return 1;
    }
    int temp =fact(n-1);
    return temp*n;
    
}

int main() {
    int ans =fact(5);
    cout<<ans;
  return 0;
}