#include<bits/stdc++.h>

void dfs(unordered_map<int, list<int>> &adj, unordered_map<int, bool> &vis, stack<int> &st, int node)
{
    vis[node] = true;
    for(auto neighbour : adj[node]){
        if(!vis[neighbour]){
            dfs(adj, vis, st, neighbour);
        }
    }
    st.push(node);
}

int FindStrongComp(unordered_map<int, list<int>> &adj, unordered_map<int, bool> &vis, int node)
{
   vis[node] = true;
    for(auto neighbour : adj[node]){
        if(!vis[neighbour]){
            FindStrongComp(adj,vis,neighbour);
        }
    }
}

int stronglyConnectedComponents(int v, vector<vector<int>> &edges)
{
	unordered_map<int, list<int>> adj;
    for(int i=0;i<edges.size();++i){
        int v1 = edges[i][0];
        int v2 = edges[i][1];
        
        adj[v1].push_back(v2);
      //  adj[v2].push_back(v1);
    }
    
    unordered_map<int, bool> vis;
   // vector<int> disc;
    stack<int> st;
    int timer = 0;
    int count = 0;
    for(int i=0;i<v;++i){
        if(!vis[i]){
              dfs(adj,vis,st,i);
            //count += ans;
        }
    }
    //Transpose of the graph
    adj.clear();
    for(int i=0;i<edges.size();++i){
        int v1 = edges[i][0];
        int v2 = edges[i][1];
 
        adj[v2].push_back(v1);
    }
     for(int i=0;i<vis.size();++i){
         vis[i] = false;
     }   
    
   while(!st.empty()){
       int top = st.top();
           st.pop();
       if(!vis[top]){
           count++;
           FindStrongComp(adj, vis, top);
       }
   }
    return count;
}
