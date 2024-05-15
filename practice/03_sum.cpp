#include<iostream>
using namespace std;
int isSum(int index,int n){
    if (n==1)
        return 1;


    return n + isSum(index +1,n-1);
}

int main(){
    int ans = isSum(0,15);
    cout<<ans;

}