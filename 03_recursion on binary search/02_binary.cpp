#include<iostream>
using namespace std;

bool binaryS(int arr[],int start,int end,int x){
    if(start>end) return 0; // element not found in

    int mid =start +  (end-start)/2;
    if(arr[mid]==x) return 1;
    
    else if(arr[mid] < x )return binaryS(arr,mid+1,end,x);//search in t

    else    return binaryS(arr,start,mid-1,x);
}

int main(){
    int arr[]={2,4,6,8,10,12};
    int x=10;
    cout<<binaryS(arr,0,5,x);

}