#include<bits/stdc++.h>
using namespace std;

void removal(vector<int> &nums, int value){
    
    for(int i=0;i<nums.size();++i){
        if(nums[i]==value){
            vector<int>::iterator it = nums.begin()+i;
            nums.erase(it);
        }
    }
    
    for(int i=0;i<nums.size();++i){
        if(nums[i]==value){
            vector<int>::iterator it = nums.begin()+i;
            nums.erase(it);
        }
    }
    
    
    int left = nums.size();
    
    for(int i=0;i<left;++i){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    cout<<"Elements left:- "<<left;
    
}

int main(){
    vector<int> nums;
    int N;
    cin>>N;//Size of the vector
    
    //Input the values in the vector
    for(int i=0;i<N;++i){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    
    int value;
    cin>>value;
    
    removal(nums,value);
    
}
