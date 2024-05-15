//power of a number

// #include<iostream>
// using namespace std;

// int pow(int a, int n){

//     if (n==0)
//     {
//         return 1;
//     }
    

//     int temp =pow(a,n/2);
//     if (n%2 == 0)
//     {
//         return temp *temp;
//     }
//     else{
//         return temp * temp*a ;
//     }
    
// }

// int main(){
//     int ans= pow(10,2);
//     cout<<ans;

// }

//power of a number

#include <iostream>
using namespace std;


int power(int a, int n ){
    if(n==0) return 1;

    return a*power(a,n-1);
}
int main() {
    int n = 2;
    cout<<power(10,n);
}