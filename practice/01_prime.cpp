// #include<iostream>
// using namespace std;

//     int isPrime(int n ){
//         if(n==1) return 1 ;

//         return isPrime(n % 2 ==0 || isPrime(n/2) && n>1);
//     }

// int main(){
//     if(isPrime(33)){
//         cout<< " is a prime number." <<endl;
//     }else{
//         cout<< " is not a prime number." <<endl;
//     }

// }

#include<iostream>
using namespace std;

bool isPrime(int n, int i = 2) {
    if (n < 2) return false;               // ya to vo 2 se chota hona chye

    if (n == i) return true;               // ya to  vo i se equal hoi tha prim no

    if (n % i == 0) return false;           // agr n%i==0 hai to not a prime number

    return isPrime(n, i + 1);                       
}
int main() {
    cout << "Enter a number: ";
    int num;
    cin >> num;
    if (isPrime(num)) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }
    return 0;
}