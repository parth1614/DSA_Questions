#include<bits/stdc++.h>
using namespace std;

int RodCutting(vector<int>& length, vector<int>& value, int n){
    vector<vector<int>> t;
    for(int i=0;i<n+1;++i){
        vector<int> temp;
        for(int j=0;j<n+1;++j){
            if(i==0 || j==0){
                temp.push_back(0);
            }
            else{
                temp.push_back(INT_MAX);
            }
        }
        t.push_back(temp);
        temp.clear();
    }
    
    for(int i=1;i<n+1;++i){
        for(int j=0;j<n+1;++j){
            if(length[i-1]<=j){
                t[i][j] = max(value[i-1]+t[i][j-length[i-1]] , t[i-1][j]);
            }
            else{
                t[i][j] = t[i-1][j];
            }
        }
    }
    return t[n][n];
}

int main(){
    int n;
    cin>>n;
    vector<int> length(n);
    for(int i=0;i<n;++i){
        length[i] = i+1;
        
    }
    vector<int> value;
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        value.push_back(x);
    }
    
    cout<<"Max profit: "<<RodCutting(length,value,n);
}
