#include<bits/stdc++.h>
using namespace std;

int LongComSubStr(string x, string y, int n, int m){
    vector<vector<int>> t;
    
    for(int i=0;i<n+1;++i){
        vector<int> temp;
        for(int j=0;j<m+1;++j){
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
    int ans = 0;
    
    for(int i=1;i<n+1;++i){
        for(int j=1;j<m+1;++j){
            if(x[i-1]==y[j-1]){
                t[i][j] = 1 + t[i-1][j-1];
                ans = max(ans,t[i][j]);
            }
            else{
                t[i][j] = 0;
            }
        }
    }
    
    
    return ans;
}

int main(){
    string x;
    string y;
    getline(cin,x);
    getline(cin,y);
    
    int n = x.length();
    int m = y.length();
    
    cout<<LongComSubStr(x,y,n,m);
}
