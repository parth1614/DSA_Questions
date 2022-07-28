#include<bits/stdc++.h>

void dfs(unordered_map<int, list<int>> &adj, vector<bool> &vis, int node, stack<int> &st)
{
    vis[node] = true;
    for(auto neighbour : adj[node]){
        if(!vis[neighbour]){
            dfs(adj,vis,neighbour,st);
        }
    }
    st.push(node);
}

vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    
    unordered_map<int, list<int>> adj;
    for(int i=0;i<edges.size();++i){
        int v1 = edges[i][0];
        int v2 = edges[i][1];
        
        adj[v1].push_back(v2);
    }
    
    vector<bool> vis(v);
    stack<int> st;
    vector<int> ans;
    for(int i=0;i<v;++i){
        if(!vis[i]){
            dfs(adj,vis,i,st);
            //ans.push_back(result);
        }
    }
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    return ans;
}
