#include <iostream>
using namespace std;

//Print an array
// void prntArr(int arr[],int index,int n )
//     {
//         if(index==n) return ;

//         cout<<arr[index]<<" ";
//         prntArr(arr,index+1,n);


//     }

// int main(){
//     int arr[]={3,4,5,1,2};
//     prntArr(arr,0,5);

// }


//Reverse an array

// void prntArr(int arr[],int index )
//     {
//         if(index==-1) return ;

//         cout<<arr[index]<<" ";
//         prntArr(arr,index-1);


//     }

// int main(){
//     int arr[]={3,4,5,1,2};
//     prntArr(arr,4);

// }


//print an array 
void prntArr(int arr[],int index )
    {
        if(index==-1) return ;

        
        prntArr(arr,index-1);
        cout<<arr[index]<<" ";


    }

int main(){
    int arr[]={3,4,5,1,2};
    prntArr(arr,4);

}