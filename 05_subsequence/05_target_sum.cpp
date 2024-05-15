#include<iostream>
using namespace std;
bool print(int arr[],int index,int n,int taget)
{
    if (taget==0) { return 1;}
        
        if (index==n || taget<0){
            return 0;
        }
            
        return print(arr, index+1,n, taget) || print(arr,index+1,n,taget-arr[index]);  // left and right
}

int main(){
    int arr[]={3,6,4,5};
    int taget =12;
    cout<<print(arr,0,4,12)<<" ";


}