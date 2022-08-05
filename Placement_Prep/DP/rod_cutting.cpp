//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
private:
    int solve(int price[], int len, vector<int> &dp)
    {
        if(len<=0) return 0;
        
        if(dp[len] != -1) return dp[len];
        
        int res = 0;
        for(int len_cut=1;len_cut<=len;++len_cut){
            if(len-len_cut >=0)
            res = max(res,solve(price, len-len_cut, dp) + price[len_cut-1]);
        }
        
        return dp[len] = res;
    }
  public:
    int cutRod(int price[], int n) {
        int sol = 0;
        vector<int> dp(n+1, -1);
        return solve(price, n, dp);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends
