#include<iostream>
using namespace std;
void permut(vector<int>& arr,vector<vector<int>>&ans,int index){
    if (arr.size()){
        ans.push_back(arr);
        return;
    }
    for (int i = index; i<arr.size(); i++)
    {
        swap(arr[index],arr[i]);
        helper(arr,ans,index+1);
        swap(arr[index],arr[i]);
    }
}
int main(){
    int ans={1,2,3};
    helper(nums,ans,3);
    cout<<"The number of permutations";

}