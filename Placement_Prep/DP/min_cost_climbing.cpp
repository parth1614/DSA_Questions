class Solution {
private:
    int solve(vector<int> &cost, int index, vector<int> &dp)
    {
        if(index>=cost.size()){
            return 0;
        }
        
        if(dp[index] != -1) return dp[index];
        int costs;
        
        costs = min(solve(cost,index+1,dp)+cost[index], solve(cost, index+2,dp)+cost[index]);
        
        return dp[index] = costs;
    }
public:
    int minCostClimbingStairs(vector<int>& cost) {
        
        int res, res1;
          
        vector<int> dp((cost.size()+1), -1);
        
        res = solve(cost,0,dp);
        res1 = solve(cost,1,dp);
        
        return min(res,res1);
    }
};
