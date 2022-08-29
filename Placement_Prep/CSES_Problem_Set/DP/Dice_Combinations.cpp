#include<bits/stdc++.h>
using namespace std;

int solve(long long n, vector<long long> &dp)
{
    if(n<0) return 0;
    if(n==0) return 1;
    
    if(dp[n] != -1) return dp[n];
    
    long long ways=0;
    for(int i=1;i<=6;++i){
         ways += solve(n-i, dp);
    }
    
    return dp[n] = ways%1000000007;
}

int main(){
    long long n;
    cin>>n;
    
    vector<long long> dp(n+1,-1);
    
    cout<<solve(n, dp)%1000000007;
}

