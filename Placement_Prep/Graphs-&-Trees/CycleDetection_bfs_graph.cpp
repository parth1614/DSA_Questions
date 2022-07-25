#include<bits/stdc++.h>
bool CycleCheck(int node, unordered_map<int, list<int>> &adj, unordered_map<int, bool> &vis)
{
    // parent nodes
    unordered_map<int, int> parent;
    parent[node] = -1;
    queue<int> q;
    
    q.push(node);
    vis[node] = true;
    
    while(!q.empty()){
        int frontNode = q.front();
        q.pop();
        
        for(auto neighbour : adj[frontNode]){
            if(vis[neighbour]==true && neighbour!=parent[frontNode]){
            return true;
        }
            else if(!vis[neighbour]){
                q.push(neighbour);
                vis[neighbour] = true;
                parent[neighbour] = frontNode;
            }
        }
    }
    return false;
}

string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
    // creating adj list
    unordered_map<int, list<int>> adj;
    for(int i=0;i<edges.size();++i){
        int v1 = edges[i][0];
        int v2 = edges[i][1];
        
        adj[v1].push_back(v2);
        adj[v2].push_back(v1);
    }
    
    unordered_map<int, bool> vis;
    for(int i=0;i<n;++i){
        if(!vis[i]){
            bool ans = CycleCheck(i, adj, vis);
            if(ans==true){
                return "Yes";
            }
        }
    }
    
    return "No";
}
