//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    private:
    
        bool canGo(vector<vector<int>> &m, vector<vector<bool>> &vis, int x, int y)
        {
            if((x>=0 && x<=m.size()-1) && (y>=0 && y<=m.size()-1) && m[x][y]==1 && vis[x][y]==false){
                return true;
            }
            else return false;
        }
        
        void solve(vector<vector<int>> &m,vector<string> &res, vector<vector<bool>> &vis, string path, int x, int y)
        {
            if((x==m.size()- 1 )&& (y==m.size() - 1)){
                res.push_back(path);
                return;
            }
            
            vis[x][y] = true;
            int newx;
            int newy;
            
            //down
            newx = x + 1;
            newy = y;
            
            if(canGo(m,vis,newx,newy)){
                path.push_back('D');
                solve(m,res,vis,path,newx, newy);
                path.pop_back();
            }
            
            //up
            newx = x - 1;
            newy = y;
            
            if(canGo(m,vis,newx,newy)){
                path.push_back('U');
                solve(m,res,vis,path,newx, newy);
                path.pop_back();
            }
            
            //left
            newx = x;
            newy = y - 1;
            
            if(canGo(m,vis,newx,newy)){
                path.push_back('L');
                solve(m,res,vis,path,newx, newy);
                path.pop_back();
            }
            
            //left
            newx = x;
            newy = y + 1;
            
            if(canGo(m,vis,newx,newy)){
                path.push_back('R');
                solve(m,res,vis,path,newx, newy);
                path.pop_back();
            }
            
            vis[x][y] = false;
        }
        
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> res;
        if(m[0][0]!=1){
            return res;
        }
        vector<vector<bool>> vis;
        for(int i=0;i<n;++i){
            vector<bool> temp;
            for(int j=0;j<n;++j){
                temp.push_back(false);
            }
            vis.push_back(temp);
            temp.clear();
        }
        string path = "";
        int startx = 0;
        int starty = 0;
        
        solve(m,res, vis, path, startx, starty);
        sort(res.begin(),res.end());
        return res;
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
