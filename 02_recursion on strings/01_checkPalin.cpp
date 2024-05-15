#include<iostream>
using namespace std;

bool checkpalin(string str,int start,int end){
    if (start>=end) return 1;

    if (str[start] != str[end]) return 0;
    
    else
    return checkpalin(str,start+1,end-1);
}
int main(){
    string str="naman";
    cout<<checkpalin(str,0,4)<<endl;
}