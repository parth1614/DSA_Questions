class Solution{
public:
    vector<int> nextPermutation(int N, vector<int> arr){
        // code here
        int k = N - 2;
        
        //if the array is of length 0
        if(N==0){
            return arr;
        }
        if(N==1){
            return arr;
        }
        
        for(int i= (N - 1); i>0 ; --i){
            if(arr[i] <= arr[i-1]){
                k--;
            }
            else{
                break;
            }
        }
        
        //All the permutations are done, and the arr is already in pure descending form
        if(k == -1){
            sort(arr.begin(),arr.end());
            return arr;
        }
       
       for(int i = N - 1; i>0; --i){
           if(arr[k] < arr[i]){
               swap(arr[k],arr[i]);
               break;
           }
       }
       
       sort(arr.begin() + (k + 1), arr.end());
       return arr;
    }
};
