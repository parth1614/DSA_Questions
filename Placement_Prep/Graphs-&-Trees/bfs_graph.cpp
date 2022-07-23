#include<bits/stdc++.h>
using namespace std;
void createAdj(vector<pair<int, int>> &edges, unordered_map<int, set<int>> &adj){
    
    for(int i=0;i<edges.size();++i){
        int v1 = edges[i].first;
        int v2 = edges[i].second;
        
        adj[v1].insert(v2);
        adj[v2].insert(v1);
    } 
}

void bfs(unordered_map<int, set<int>> &adj, vector<int> &result, unordered_map<int, bool> &vis, int node){
    
    queue<int> q;
    q.push(node);
    vis[node] = 1;
    
    while(!q.empty()){
        
        int frontNode = q.front();
        q.pop();
        
        result.push_back(frontNode);
        
        for(auto i : adj[frontNode]){
            if(!vis[i]){
                q.push(i);
                vis[i] = 1;
            }
        }     
    }
}

vector<int> BFS(int vertex, vector<pair<int, int>> edges)
{
   unordered_map<int, set<int>> adj;
    vector<int> result;
    unordered_map<int, bool> vis;
    
    // creating the adjacencey list
    createAdj(edges, adj);
    
    // traversal for all the disconnected components
    
    for(int i=0;i<vertex;++i){        
      if(!vis[i]){
            bfs(adj, result, vis, i);
      }
    }
    
    return result;
}
