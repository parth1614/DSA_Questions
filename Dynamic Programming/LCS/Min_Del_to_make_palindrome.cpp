#include<bits/stdc++.h>
using namespace std;

int LPS(string z, string x, int n){
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
        for(int j=1;j<n+1;++j){
            if(z[i-1] == x[j-1]){
                t[i][j] = 1+t[i-1][j-1];
            }
            else{
                t[i][j] = max(t[i-1][j] , t[i][j-1]);
            }
        }
    }
    
    int del = n - t[n][n];
    
    return del;
}

int main(){
    string x;
    getline(cin,x);
    
    string z = x;
    
    reverse(x.begin(),x.end());
   
    int n = z.length();
    
    cout<<LPS(z,x,n);
}
