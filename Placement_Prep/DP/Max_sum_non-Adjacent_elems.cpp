#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &nums, int n, int index,vector<int> &dp)
{
    if(index>n){
        return 0;
    }
    if(dp[index] != -1) return dp[index];
    int sum = 0;
    int excl = solve(nums, n, index+1,dp);
    int incl =  solve(nums,n,index+2,dp) +nums[index];
    
    return dp[index] = max(incl,excl);
}

int maximumNonAdjacentSum(vector<int> &nums){
    // Write your code here.
    vector<int> dp((nums.size()+1),-1);
    int n = nums.size();
    return solve(nums,n-1, 0,dp);
}
