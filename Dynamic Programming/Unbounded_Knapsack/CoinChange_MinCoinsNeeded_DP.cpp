#include<bits/stdc++.h>
using namespace std;

int CoinChange(vector<int>& coin, int sum, int n){
    vector<vector<int>> t;
    
    for(int i=0;i<n+1;++i){
        vector<int> temp;
        for(int j=0;j<sum+1;++j){
            if(i==0 || (i==0&&j==0)){
                temp.push_back(INT_MAX-1);
            }
            else if(j==0){
                temp.push_back(0);
            }
            else if(i==1 && j>=1){
                if(j%coin[0]==0){
                    temp.push_back(j/coin[0]);
                }
                else{
                    temp.push_back(INT_MAX-1);
                }
            }
            else{
                temp.push_back(INT_MAX);
            }
        }
        t.push_back(temp);
        temp.clear();
    }
    
    
    for(int i=2;i<n+1;++i){
        for(int j=0;j<sum+1;++j){
            if(coin[i-1]<=j){
                t[i][j] = min(1 + t[i][j-coin[i-1]] , t[i-1][j]);
            }
            else{
                t[i][j] = t[i-1][j];
            }
        }
    }
    return t[n][sum];
}

int main(){
    int sum;
    cin>>sum;
    int n;
    cin>>n;
    
    vector<int> coin;
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        coin.push_back(x);
    }
    
    cout<<"Min num of coins needed: "<<CoinChange(coin,sum,n);
}
