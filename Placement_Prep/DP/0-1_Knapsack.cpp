//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{   private:
        int solve(int W, int wt[], int val[], int n, vector<vector<int>> &dp){
            
            if(W==0 || ((n)==0)){
                
                 return 0;
            }
            
            if(dp[n][W] != -1) return dp[n][W];

            // not taken
            if(wt[n-1]>W)
               return dp[n][W] = solve(W,wt,val,n-1, dp);
               
            //taken
            if(wt[n-1]<=W)
            return dp[n][W] = max(solve(W,wt,val,n-1, dp), val[n-1] + solve(W - wt[n-1],wt, val, n-1, dp));
            
          
        }
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
        vector<vector<int>> dp;
        
            for(int i=0;i<=n;++i){
                vector<int> temp;
                for(int j=0;j<=W;++j){
                    temp.push_back(-1);
                }
                dp.push_back(temp);
                temp.clear();
            }        
        
       int sol = solve(W, wt, val, n, dp);
       return sol;
    }
};

//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends
