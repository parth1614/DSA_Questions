class Solution {
private:
    int solve(int index, vector<int> &nums, vector<int> &dp){
        if(index==0) return 1;
        if(dp[index] != -1) return dp[index];
        int res = 1;
        
        for(int j=0;j<=index;++j){
            if(nums[j]<nums[index])
            res = max(res, solve(j, nums, dp) + 1);
        }
        
        return dp[index] = res;
    }
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n+1,-1);
        
        int res = 1;
        for(int i=0;i<nums.size();++i){
            res = max(res, solve(i,nums,dp));
        }
        
        return res;
    }
};
