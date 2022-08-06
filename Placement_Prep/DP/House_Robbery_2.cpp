class Solution {
private:
int solve(vector<int> &vec, int n, int index, vector<int> &dp)
{
    
    if(index>=n){
        return 0;
    }
    if(dp[index] != INT_MIN) return dp[index];
    int exclusion = solve(vec, n, index+1,dp);
    int inclusion = solve(vec, n, index+2,dp) + vec[index];
    
    return dp[index] = max(exclusion,inclusion);
}
public:
    int rob(vector<int>& nums) {
        
    int n = nums.size();
    if(n==1) return nums[0];
        
    
    vector<int> vec1;
    vector<int> vec2;
    
    for(int i=0;i<n-1;++i){
            vec1.push_back(nums[i]);
    }
    
    for(int i=1;i<n;++i){        
            vec2.push_back(nums[i]);
    }
    
    vector<int> dp((nums.size()+1),INT_MIN);
        int first = solve(vec1, n-1,0,dp);
       // dp.clear();
        vector<int> dp1((nums.size()+1),INT_MIN);
        int sec = solve(vec2,n-1,0,dp1);
    
    return max(first,sec);
        
    }
};
