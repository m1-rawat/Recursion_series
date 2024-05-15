#include <iostream>
using namespace std;

// int fibo(int n){
//     if(n==1 || n==0) return n;

//     int temp1 = fibo(n-1); 
//     int temp2 = fibo(n-2); 
//     cout<<n<<" ";
//     return fibo(n-1) + fibo(n-2);
// }


// Print 1 to n
// void print(int n ){
//     if (n==1) 
//     {
//         cout<<1<<" ";
//         return;
//     }

//     print(n-1);
//     cout<<n<<" ";
    
// }
// int  main() {
//     int n ;
//     cin>>n;
//     print(n);
// }


//print 1 to n (even numbers)
// void print(int n ){
//     if (n==2) 
//     {
//         cout<<2<<" ";
//         return;
//     }

//     print(n-2);
//     cout<<n<<" ";
    
// }
// int  main() {
//     int n ;
//     cin>>n;
//     print(n);
// }


// 2 args
// void print(int num ,int n ){
//     if (num==n) 
//     {
//         cout<<num<<" ";
//         return;
//     }

//     cout<<num<<" ";
//     print(num+2,n);
    
    
// }
// int  main() {
//     int n=10;
//     print(2,10);
// }



//odd print 1 to n
void print(int num){
    if (num==1) 
    {
        cout<<1<<" ";
        return;
    }

    
    print(num-2);
    cout<<num<<" ";
    
    
}
int  main() {
    int num ;
    cin>>num;
    print(num);
}