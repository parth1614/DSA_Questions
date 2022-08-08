#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &num, int tar, vector<int> &dp)
{
    if(tar==0) return 1;
    if(tar<0) return 0;
    if(dp[tar] != -1) return dp[tar];
    int ways = 0;
    for(int i=0;i<num.size();++i){
        ways += solve(num, tar - num[i], dp);
    }
    
    return dp[tar] = ways;
}

int findWays(vector<int> &num, int tar)
{
    vector<int> dp(tar+1,-1);
    return solve(num, tar, dp);
}
