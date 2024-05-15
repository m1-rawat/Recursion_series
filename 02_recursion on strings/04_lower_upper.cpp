#include<iostream>
using namespace std;

void lowerUp(string &str,int index){
    if (index==-1) return ;


    str[index]='A' +str[index]-'a';
    lowerUp(str,index-1);
    
}
int main() {
    string str="helloworld";
    lowerUp(str,9);
    cout<<str<<" ";
}