class Solution {
private:
    int solve(int n, vector<int> &days, vector<int> &costs, int index, vector<int> &dp)
    {
        if(index>=n) return 0;
        if(dp[index]!=-1) return dp[index];
        int ticket1 = costs[0] + solve(n,days,costs,index+1,dp);
        int ticket2;
        int ticket3;
        int i = index;
        for(i=index; i<n && days[i]<(days[index]+7); i++){}
         int t1 = costs[1] + solve(n, days, costs, i,dp);
         ticket2 = t1;
        

        for(i=index; i<n && days[i]<(days[index]+30); i++){}
        
            int t2 = costs[2] + solve(n, days, costs, i,dp);
            ticket3 = t2;
        

        return dp[index] = min(ticket1, min(ticket2,ticket3));
    }
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int n = days.size();
        vector<int> dp(n+1, -1);
        return solve(n, days, costs, 0, dp);
    }
};
