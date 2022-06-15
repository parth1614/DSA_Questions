class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
      
      //Calculating the size of array
        int n = l + r + 1;
      
      //sorting the array
        sort(arr,arr+n);
        return arr[k-1];
        
    }
};

// The Auxiliary Time Complexity of this approach is O(nlogn) and the Auxiliary Space Complexity is O(1)

