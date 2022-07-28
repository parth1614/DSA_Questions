#include<bits/stdc++.h>

bool cycleCheck(unordered_map<int, list<int>> &adj, unordered_map<int, bool> &vis, unordered_map<int, bool> &dfsVis, int node)
{
    vis[node] = true;
    dfsVis[node] = true;
    
    for(auto neighbour : adj[node]){
        if(!vis[neighbour]){
            bool val = cycleCheck(adj,vis,dfsVis,neighbour);
            if(val==true){
                return true;
            }
        }
        else if(vis[neighbour]==true && dfsVis[neighbour]==true)
        {
            return true;
        }
    }
    dfsVis[node] = false;
    return false;
}

int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
    
  unordered_map<int, list<int>> adj;
    
    for(int i=0;i<edges.size();++i){
        int v1 = edges[i].first;
        int v2 = edges[i].second;
        
      //Directed Graph
        adj[v1].push_back(v2);
       // adj[v2].push_back(v1);
    }
    
    unordered_map<int, bool> vis;
    unordered_map<int, bool> dfsVis;
    bool result;
    for(int i=0;i<n;++i){
        if(!vis[i]){
           result = cycleCheck(adj,vis,dfsVis,i);
           if(result==true){
               return true;
           }
        }
    }
    return false;
}
