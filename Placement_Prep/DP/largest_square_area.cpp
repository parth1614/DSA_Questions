class Solution{
private:
    int solve(vector<vector<int>> &mat, int row, int col, int &maxi, vector<vector<int>> &dp)
    {
        if(row==mat.size() || col==mat[0].size()) return 0;
        
        if(dp[row][col] != -1) return dp[row][col];
        
        int right, down, dig;
        
        right = solve(mat, row, col+1, maxi,dp);
        down = solve(mat, row+1, col, maxi,dp);
        dig = solve(mat, row+1, col+1,maxi,dp);
        
        if(mat[row][col]==1){
            int ans = 1 + min(right, min(down,dig));
            maxi = max(maxi, ans);
            return dp[row][col] = ans;
        }
        else return dp[row][col] = 0;
    }
public:
    int maxSquare(int n, int m, vector<vector<int>> mat){
        int maxi = 0;
        vector<vector<int>> dp(n+1, vector<int>(m+1, -1));
        solve(mat, 0, 0, maxi, dp);
        return maxi;
    }
};
