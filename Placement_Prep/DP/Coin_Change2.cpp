class Solution {
private:
    int solve(int index, int amount, vector<int> &coins,vector<vector<int>> &dp){
        if(amount==0) return 1;
        if(index<0) return 0;
        
        if(dp[index][amount] != -1) return dp[index][amount];
        int count = 0;
        for(int coin_amount = 0; coin_amount<=amount; coin_amount+=coins[index]){
            
                count += solve(index-1,amount-coin_amount,coins,dp);
            
        }
        
        return dp[index][amount] = count;
    }
public:
    int change(int amount, vector<int>& coins) {
        vector<vector<int>> dp;
        
        for(int i=0;i<=coins.size();++i){
            vector<int> temp;
            for(int j=0;j<=amount;++j){
                temp.push_back(-1);
            }
            dp.push_back(temp);
            temp.clear();
        }
        
        int n = coins.size();
        int count = solve(n-1, amount,coins,dp);
        return count;
    }
};
