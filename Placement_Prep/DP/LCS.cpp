class Solution {
private:
    int solve(int x, int y, string &str1, string &str2, vector<vector<int>> &dp)
    {
        
        if(x<0||y<0) return 0;
        int len = 0;
        if(dp[x][y] !=-1) return dp[x][y]; 
        //remove both characters
        if(str1[x]==str2[y]){
           len += solve(x-1,y-1,str1,str2,dp) + 1;
        }
        else{
            len = max(solve(x-1,y,str1,str2,dp),solve(x,y-1,str1,str2,dp));
        }
        
        return dp[x][y] = len;
    }
public:
    int longestCommonSubsequence(string text1, string text2) {
        
        int x = text1.length();
        int y = text2.length();
        
        vector<vector<int>> dp(x , vector<int> (y,-1));
        // for(int i=0;i<=x;++i){
        //     vector<int> temp;
        //     for(int j=0;j<=y;++j){
        //         temp.push_back(-1);
        //     }
        //     dp.push_back(temp);
        //     temp.clear();
        // }
        
        return solve(x-1, y-1, text1, text2, dp);
    }
};
