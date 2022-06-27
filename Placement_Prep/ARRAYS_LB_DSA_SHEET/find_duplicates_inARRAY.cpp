// This approach has Time Complexity of => O(nLog(n)) becasue for loop has n and inserting operation has logn time complexity
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        map<int,int> s;
        
        for(int i=0;i<n;++i){
            s[arr[i]]++;
        }
        
        vector<int> vec;
        int flag = 0;
        for(auto it=s.begin();it!=s.end();++it){
            if(it->second > 1){
                vec.push_back(it->first);
                flag += 1;
            }
            
        }
        
        
        
        if(flag>=1){
            return vec;
        }
        else{
            vec.push_back(-1);
            return vec;
        }
    }
};
//x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x- This Approach passes 343/350 test cases, 344th has TLE x-x-x-x-x-x-x-x-x--x-x-x-x-x-x-x-x-xx-x-x-x-x-x//
