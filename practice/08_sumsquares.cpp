#include<iostream>
using namespace std;
int ssqquuaarree(int n){
    if(n==1) return 1;

    return n*n + ssqquuaarree(n-1);
}
int main(){
    int ans=ssqquuaarree(3);
    cout<<ans;
}