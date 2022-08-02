class Solution {
private:
    void sub(vector<int> nums, vector<vector<int>> &res, int index, vector<int> store){
        
        if(index>=nums.size()){
            res.push_back(store);
            return ;
        }    
        
        //exclude
        sub(nums, res, index+1, store);
        
        //include the element
        int elem = nums[index];
        store.push_back(elem);
        sub(nums, res, index + 1, store);
    }
    
public:
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> store;
        int index = 0;
        sub(nums, res, index, store);
        return res;
    }
};
