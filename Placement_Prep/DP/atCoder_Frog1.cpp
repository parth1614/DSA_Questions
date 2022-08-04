#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &h,vector<int> &dp, int index){

    if(index==0) return 0;
    
    
    int cost = INT_MAX;
        if(dp[index] != -1) return dp[index];
    // takes 1 step
    cost = min(cost, solve(h,dp,index- 1) + abs(h[index- 1]-h[index]));
    
    // takes 2 steps
    if(index>1)
    cost = min(cost, solve(h,dp,index- 2) + abs(h[index- 2]-h[index]));
    
    return dp[index] = cost;
}

int main(){
   int n;
   cin>>n;
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
   
   cout<<solve(h,dp,n-1);
}
