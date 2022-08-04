class Solution {
private:
    int ans(int n, vector<int> &dp){
         
        if(n==0 || n==1) return n;
        if(dp[n] != -1) return dp[n];
        return dp[n] = ans(n-1,dp) + ans(n-2,dp);
    }
public:
    
    int fib(int n) {
       vector<int> dp;
        //memset(dp,-1,sizeof(dp));
        for(int i=0;i<=n;++i){
            dp.push_back(-1);
        }
        return ans(n, dp);
    }
};
