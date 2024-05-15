#include <iostream>
using namespace std;

int fib(int n ){
    if(n==1 || n==0){
        return n;
    }
    int temp =  fib(n-1);
    int temp1 =fib(n-2);

    return temp+temp1;
}

int main() {
  int ans =fib(10);
  cout<<ans;

  return 0;
}