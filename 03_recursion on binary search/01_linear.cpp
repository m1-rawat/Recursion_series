#include<iostream>
using namespace std;

bool linearS(int arr[],int x,int index,int n){
    if(index==n) return 0;

    if(arr[index]==x) return 1;

    return linearS(arr,x,index+1,n);
}


int main(){
    int arr[]= {3,4,5,1,22,8};
    cout<<linearS(arr,22,0,6);
}