#include<iostream>
using namespace std;
void inc(int index,int n){
    if (n==0) return ;

    inc(index+1,n-1);
    cout<<n;
    return;

}

int main(){
    inc(0,5);

}