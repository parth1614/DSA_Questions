#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<long> vec;
    for(int i=0;i<5;++i){
        long x;
        cin>>x;
        vec.push_back(x);
    }
    sort(vec.begin(),vec.end());
    
    long minSum=0,maxSum=0;
    
    for(int i=1;i<5;++i){
        maxSum = maxSum + vec[i];
    }
    
    for(int i=0;i<4;++i){
        minSum = minSum + vec[i];
    }
    cout<<minSum<<" "<<maxSum;
    
}
