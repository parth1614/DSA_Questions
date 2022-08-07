#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;

int solve(int n, int k, vector<int> &dp)
{
    if(n==1) return k;
    //k for same 2 colors, k*k-1 for different colors
    if(n==2) return (k+((k)*(k-1)));
    if(dp[n] != -1) return dp[n];
    int res;
    res = (1ll*(k-1)*((solve(n-1,k,dp) + solve(n-2,k,dp))))%MOD;
    
    return dp[n] = res%MOD;
}

int numberOfWays(int n, int k) {
    vector<int> dp(n+1,-1);
    return solve(n,k,dp)%MOD;
}
