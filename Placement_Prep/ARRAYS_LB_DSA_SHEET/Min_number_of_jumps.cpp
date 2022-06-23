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


// x-x-x-x-x-x-x-x-x-x-x-x-x-x-x- OPTIMAL SOLUTION BELOW !!! x-x-x-x-x-x-x-x-x-xx-x-x-x-x-x-x-xx-x-x-x-x

class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
     int currEnd = 0;
     int maxReach = 0;
     int jumps = 0;
     
      //Edge Cases//
     if(n>1)
       {
            if(arr[0] == 0){
            return -1;
        }    
        }
        
        if(n==1){
            return 0;
        }
     ////////////
      
     for(int i=0;i<n;++i){
        
        //currEnd = arr[i];
       //Maximum length the ladder can reach
        maxReach = max(maxReach,(i + arr[i]));
        
       //If the Ladder length Surpases the end of the array, we have found the minimum jumps; We return 1 + jumps, because the last jump had to be counted in the last if-case
        if(maxReach >= n-1){
            return 1 + jumps;
        }
        
       // If 'i' reaches till the max length of the ladder; this means that we haven't found any larger ladder, and thus we can't reach the end of the array or move forward
        if(i == maxReach){
            return -1;
        }
        
       //If 'i' reaches the current end of the current ladder; and we have found a larger ladder then we increment the jump and make Current end the Maximum reachable lengthh by the new ladder
        if(i == currEnd){
            jumps++;
            currEnd = maxReach;
        }
            
     }
     
    }
};
// Time Complexity => O(N); Space Complexity => O(1)

// x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-xx-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-END-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-
