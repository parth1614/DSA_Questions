// This is the Dynamic Programming Solution; Time Complexity => O(N^2); Space Complexity => O(N)
class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
     //Edge Cases 
      if(n>1)
       {
            if(arr[0] == 0){
            return -1;
        }    
        }
        
        if(n==1){
            return 0;
        }
      
   vector<int> jumps;
   jumps.push_back(0);
   int min_jump = INT_MAX;
   int pos = arr[0];
   
   for(int i=1;i<n;++i){
       jumps.push_back(INT_MAX);
   }
   
   for(int i=1;i<n;++i){
       for(int j=0;j<i;++j){
           
               if(i <= j + arr[j]){
                   jumps[i] = min(jumps[i], jumps[j] + 1);
               }
    
       }
   }
   
   if(jumps[n-1]<0 || jumps[n-1] == INT_MAX){
       return -1;
   }
   
        return jumps[n-1];
    }
};

// -x-x-x-x-x-x-x-x-x-x-x-x-x-  This Solution passes 137/141 test cases, 138th test case causes TLE -x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-


