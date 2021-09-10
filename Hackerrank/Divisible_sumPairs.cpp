#include<bits/stdc++.h>
using namespace std;

void divide(vector<int>& vec, int k){
    int sum = 0;
    for(int i=0;i<vec.size();++i){
        for(int j=i+1;j<vec.size();++j){
            if((vec[i]+vec[j])%k==0){
                sum = sum + 1;
            }
        }
    }
    cout<<sum;
}

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> vec;
    
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        vec.push_back(x);
    }
    divide(vec,k);
}
