class Solution {
private:
    void solve(vector<vector<int>> &res, int curr, vector<int> nums){
        
        if(curr >= nums.size()){
            res.push_back(nums);
            return;
        }
        
        for(int i=curr;i<nums.size();++i){
            swap(nums[i],nums[curr]);
            solve(res,curr + 1, nums);
            swap(nums[i],nums[curr]);
        }
        
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>> res;
        solve(res, 0, nums);
        
        return res;
    }
};
