#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &h,vector<int> &dp, int index, int k){

    if(index==0) return 0;
    
    
    int cost = INT_MAX;
        if(dp[index] != -1) return dp[index];
    
    for(int j=1;j<=k;++j){
        if(index-j>=0)
        cost = min(cost, solve(h,dp,index-j,k) + abs(h[index-j]-h[index]));
    }

    return dp[index] = cost;
}

int main(){
   int n;
   int k;
   cin>>n>>k;
   vector<int> dp;
   for(int i=0;i<=n;++i){
       dp.push_back(-1);
   }
   
   vector<int> h;
   for(int i=0;i<n;++i){
       int x;
       cin>>x;
       h.push_back(x);
       
   }
   
   cout<<solve(h,dp,n-1,k);
}
