#include<iostream>
using namespace std;
    boolean isPalin(char ch[],int s,int e){

        if(s==e || s>2){
            return true;
        }



        if(ch[s] == ch[e]){
            boolean temp =isPalin(ch,s+1,e-1);
            return temp;
        }else {
            return  false;
        }


    }
int main(){
    int ans= isPalin();
    cout<<ans;

}