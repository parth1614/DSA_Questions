//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    private:
        int solve(int n, vector<int> &dp)
        {
            if(n<=0) return 0;
            
            if(dp[n]!=-1) return dp[n];
            
            int sol = n;
            for(int i=1;i*i<=n;++i){
                sol = min(sol, 1 + solve(n-(i*i),dp));
            }
            
            return dp[n] = sol;
        }
	public:
	int MinSquares(int n)
	{
	    vector<int> dp(n + 1,-1);
	   return solve(n,dp);
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans = ob.MinSquares(n);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends
