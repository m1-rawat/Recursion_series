#include<iostream>
using namespace std;

int checkVow(string str,int index){
    if(index==-1) return 0;

    //vowel hai 
    if(str[index]=='a'||str[index]=='e'||str[index]=='i'||str[index]=='o'||str[index]=='u')    return 1+checkVow(str,index-1);
    
    //vowel nhi hai
    else
        return checkVow(str,index-1);
}


int main(){
    string str ="uayoek";
    cout<<checkVow(str,6)<<endl;

}