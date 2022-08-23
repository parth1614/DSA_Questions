class Solution {
private:
    int solve(vector<int>& obstacles,int n, int lane, int pos, vector<vector<int>> &dp)
    {
        if(pos>=n) return 0;
        
        if(dp[pos][lane] != -1) return dp[pos][lane];
        
        if(obstacles[pos+1] != lane) return solve(obstacles,n, lane, pos+1,dp);
        
        else{
            int sol = INT_MAX;
            for(int i=1;i<=3;++i){
                if(obstacles[pos] !=i && lane != i) {
                    sol = min(sol, 1 + solve(obstacles,n, i, pos, dp));
                }
            }
            return dp[pos][lane] = sol;
        }

    }
public:
    int minSideJumps(vector<int>& obstacles) {
        int n = obstacles.size();
        vector<vector<int>> dp(n+1, vector<int>(4,-1));
        return solve(obstacles, n-1, 2, 0,dp);
    }
};
