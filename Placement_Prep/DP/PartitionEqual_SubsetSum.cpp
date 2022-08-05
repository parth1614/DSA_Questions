class Solution {
private:
    bool solve(vector<int> &nums, int sum, int index, vector<vector<int>> &dp)
    {
        if(sum==0) return true;
        if(index<0) return false;
        
        if(dp[sum][index] != -1) return dp[sum][index];
        //not considered
       bool accepted = solve(nums, sum, index-1, dp);
        
        //considered
        if(sum-nums[index] >= 0)
        accepted |= solve(nums, sum - nums[index], index-1, dp);
        
        return dp[sum][index] = accepted;
    }
public:
    bool canPartition(vector<int>& nums) {
        
        int sum = accumulate(nums.begin(),nums.end(),0);
        
         vector<vector<int>> dp;
        for(int i=0;i<=sum;++i){
            vector<int> temp;
            for(int j=0;j<=nums.size();++j){
                temp.push_back(-1);
            }
            dp.push_back(temp);
            temp.clear();
        }
        
        if(sum%2 != 0) return false;
        sum /= 2;
        
        return solve(nums,sum,nums.size()-1,dp);
    }
};
