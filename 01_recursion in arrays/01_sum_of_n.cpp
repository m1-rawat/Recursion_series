

#include <iostream>
using namespace std;

//sum of n numbers using recursion

int sum(int n){
if(n==1){
    return 1;
}
int temp=sum(n-1);
return  n+temp;  //recursion call
}
int main() {
  int ans =sum(5);
  cout<<ans;
  return 0;
}