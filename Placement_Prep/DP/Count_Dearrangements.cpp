#include<bits/stdc++.h>
#define MOD 1000000007;
using namespace std;

long long int solve(int n, vector<long long int> &dp)
{
    if(n==1) return 0;
    if(n==2) return 1;
    
    if(dp[n] != -1) return dp[n];
    
    long long int res;
    res = ((n-1)*(solve(n-1,dp)+solve(n-2,dp)))%MOD;
    
    return dp[n] = res%MOD;
}

long long int countDerangements(int n) {
    vector<long long int> dp(n+1, -1);
    return solve(n,dp);
}
