#include <iostream>
using namespace std;


void fun(int n){
    if (n==1)
    {
        cout<<1<<" "<<"Happy bday mitr" << endl;
        return;
    }
    


    fun(n-1);
    cout<<n<<" "<<"Happy bday mitr"<<endl;

}

int main(){
    int n ;
    cin>>n;
    fun(n);
}

