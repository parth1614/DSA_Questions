#include<bits/stdc++.h>
using namespace std;

bool CycleCheck(int node, int parent,  unordered_map<int, list<int>> &adj,unordered_map<int, bool> &vis )
{
    
    vis[node] = true;
    
    for(auto neighbour : adj[node]){
        if(!vis[neighbour]){
            bool detected = CycleCheck(neighbour, node, adj, vis);
            if(detected==true){
                return true;
            }
        }
        else if(vis[neighbour]==true && neighbour!=parent){
            return true;
        }
    }
    return false;
}


string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
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
            bool ans = CycleCheck(i, -1, adj, vis);
            if(ans == true){
                return "Yes";
            }
        }
    }
    return "No";
}
