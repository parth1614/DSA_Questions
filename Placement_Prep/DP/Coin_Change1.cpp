class Solution {
private:
    int solve(vector<int>& coins, int amount, vector<int> &dp){
        if(amount==0) return 0;
        
        if(dp[amount] != -1) return dp[amount];
        
        int count = INT_MAX;
        for(int coin : coins){
            if(amount - coin >= 0)
                count = min(count + 0ll, solve(coins,amount-coin,dp) + 1ll);
        }
        return dp[amount] = count;
    }
public:
    int coinChange(vector<int>& coins, int amount) {
        int n = 1e4+10;
        vector<int> dp(n,-1);
        int count = solve(coins, amount,dp);
        if(count==INT_MAX) return -1;
        else return count;
    }
};
