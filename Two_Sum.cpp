#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void check(vector<int> &v,int target){
    for(int i=0;i<v.size();++i){
        for(int j=i+1;j<v.size();++j){
             if(v[i]+v[j]==target){
            cout<<i<<" "<<j;
        }
        }
       
    }
}

int main(){
    int nums,target;
cin>>nums;
    cin>>target;
    
    vector<int> v;
    for(int i=0;i<nums;++i){
        int x;
        cin>>x;
        v.push_back(x);
    }
    check(v,target);
    
}
