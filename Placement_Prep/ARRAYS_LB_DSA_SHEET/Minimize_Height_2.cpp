class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr,arr + n);
        
        // int first = arr[0] + k;
        // int last = arr[n-1] - k;
        // int diff;
        // //return diff;
        
        // for(int i=0;i<n;++i){
        //     diff = a[n-i] - a[0];
        // }
        
        int final = arr[n-1] - arr[0];
        
        int mini = arr[0], maxi = arr[n-1];
        
        for(int i=1;i<n;++i){
            
            if(arr[i]-k<0)
            continue;
            
            mini = min(arr[0]+k,arr[i]-k);
            maxi = max(arr[i-1]+k,arr[n-1]-k);
            
            final = min(final,maxi-mini);
        }
        
        return final;
    }
};
