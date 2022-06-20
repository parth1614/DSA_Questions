class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        
        int maxsum = INT_MIN;
        
        // for(int i=0;i<n;++i){
        //     sum += arr[i];
        // }
        
        
        int inner_sum = 0;
        //int small = sum;
        
        for(int i=0;i<n;++i){
            inner_sum += arr[i];
            if(inner_sum>maxsum){
                maxsum = inner_sum;
            }
            if(inner_sum<0){
                inner_sum = 0;
            }
        }
        
        
        // int outer_sum = 0;
        // for(int i=n-1;i>=0;--i){
        //     outer_sum += arr[i];
        //     small = max(small,(outer_sum));
        // }
        return maxsum;
    }
};
// Solution using Kadane's Algorithm; Time Complexity => O(N); Space Complexity => O(1)
