class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
         // Code here
        //  for(int i=0;i<intervals.size();++i){
        //      cout<<intervals[i][i]<<" ";
        //  }
        //return intervals;
        
        vector<int> vec;
        
        for(int i=0;i<intervals.size();++i){
            vec.push_back(intervals[i][0]);
            vec.push_back(intervals[i][1]);
        }
        
        sort(vec.begin(), vec.end());
        
        intervals.clear();
        
        int sum = 0;
        int start = 0;
        
        for(int it = 0;it<vec.size();++it){
            sum += it;
            if(sum==(it(it + 1))/2){
                intervals[i].push_back(start);
                intervals[i].push_back(it);
                start = it;
            }
           
        }
        // int it = 0;
        
        // while(sum != (it(it+1))/2){
        //     sum += it;
        //     it++;
        // }
            
    }
};
