class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
         // Code here
        vector<vector<int>> ans;
         sort(intervals.begin(),intervals.end());
         int start=intervals[0][0];
         int end=intervals[0][1];
         
      for(int i=1;i<intervals.size();i++){
             if(start<intervals[i][0]&&end<intervals[i][1]&&end<intervals[i][0]){
                  ans.push_back({start,end});
                 start=intervals[i][0];
                  end=intervals[i][1];
             }
             else{
                start=min(start,min(intervals[i-1][0],intervals[i][0]));
                end=max(end,max(intervals[i-1][1],intervals[i][1]));
              }
         }
         
        ans.push_back({start,end});
         return ans; 
        
    }
};
