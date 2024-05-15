#include <iostream>
using namespace std;

//print of n numbers using recursion


void print(int n){
    if (n==1){
        cout<<1<<endl;
        return;
    }

    print(n-1);
    cout<<n;
}

int main(){
    int n ;
    cin>>n;
    print(n);

}
