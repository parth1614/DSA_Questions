#include<bits/stdc++.h>

void dfs(unordered_map<int, list<int>> &adjList, unordered_map<int, bool> &vis, int node, vector<int> &component)
{
    component.push_back(node);
    vis[node] = true;
    
    for(auto i : adjList[node]){
        if(!vis[i]){
            dfs(adjList, vis, i, component);
        }
    }
}

vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    // Write your code here
    unordered_map<int, list<int>> adjList;
    unordered_map<int, bool> vis;
    
    for(int i=0;i<edges.size();++i){
        int v1 = edges[i][0];
        int v2 = edges[i][1];
        
        adjList[v1].push_back(v2);
        adjList[v2].push_back(v1);
    }
    
    vector<vector<int>> result;
    for(int i=0;i<V;++i){
        if(!vis[i]){
            vector<int> component;
            dfs(adjList, vis, i, component);
            result.push_back(component);
        }
    }
    sort(result.begin(),result.end());
    return result;
}
// Time Complexity => O(VlogV + E). Generally it's O(V+E) for DFS, but here we are also sorting the vertices vector so (VlogV + V + E)
// Space Complexity => O(v+E)
