#include<bits/stdc++.h>

void dfs(unordered_map<int, list<int>> &adj, unordered_map<int, bool> &vis, vector<int> &disc, vector<int> &early, vector<vector<int>> &result, int parent, int node, int timer)
{
    vis[node] = true;
    disc[node] = early[node] = timer;
    timer++;
    for(auto neighbour : adj[node]){
        if(neighbour==parent) continue;

        if(!vis[neighbour]){
             dfs(adj,vis,disc,early,result,node,neighbour,timer);
            //update the early of the parent node
            early[node] = min(early[node], early[neighbour]);
            //check for bridges
            if(early[neighbour] > disc[node]){
                vector<int> ans;
                ans.push_back(node);
                ans.push_back(neighbour);
                result.push_back(ans);
                ans.clear();
            }
            
        }
        else{
                //handle for back edge
                early[node] = min(early[node],disc[neighbour]);
            }
    }
}

vector<vector<int>> findBridges(vector<vector<int>> &edges, int v, int e) {
    // Write your code here
    unordered_map<int, list<int>> adj;
    for(int i=0;i<edges.size();++i){
        int v1 = edges[i][0];
        int v2 = edges[i][1];
        
        adj[v1].push_back(v2);
        adj[v2].push_back(v1);
    }
    
    int timer = 0;
    vector<int> disc(v);
    vector<int> early(v);
    unordered_map<int, bool> vis(v);
    vector<vector<int>> result;
    
    for(int i=0;i<v;++i){
        if(!vis[i]){
            dfs(adj,vis,disc,early,result,-1,i,timer);
        }
    }
    return result;
}
