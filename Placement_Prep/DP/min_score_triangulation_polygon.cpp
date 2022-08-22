class Solution {
private:
    int solve(vector<int> &val, int start, int end, vector<vector<int>> &dp)
    {
        if(start+1 == end) return 0;
        if(dp[start][end] != -1) return dp[start][end];
        int sol = INT_MAX;
        
        for(int i=start+1; i<end; ++i){
            sol = min(sol, (val[start]*val[end]*val[i] + solve(val, start, i,dp) + solve(val, i, end,dp)));
        }
                      
        return dp[start][end] = sol;
    }
public:
    int minScoreTriangulation(vector<int>& values) {
        vector<vector<int>> dp(values.size()+1, vector<int>(values.size()+1, -1));
        return solve(values, 0, values.size()-1, dp);
    }
};
