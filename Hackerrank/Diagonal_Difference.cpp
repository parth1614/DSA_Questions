#include<bits/stdc++.h>
using namespace std;

int diff(vector<vector<int>>& matrix, int n){
    int sumL = 0;
    int sumR = 0;
    
    for(int i=0;i<n;++i){
        int j = i;
        sumL = sumL + matrix[i][j];
    }
    
    for(int i=0;i<n;++i){
        sumR = sumR + matrix[i][n-1-i];
    }
    
    int difference =sumL - sumR;
    int val = abs(difference);
    
    return val;
}

int main(){
    vector<vector<int>> matrix(100);
    int n;
    cin>>n;
    
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            int x;
            cin>>x;
            matrix[i].push_back(x);
        }
    }
    cout<<diff(matrix,n);
}
