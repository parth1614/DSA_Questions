#include<bits/stdc++.h>

vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    // Write your code here
    vector<int> indegree(v);
    unordered_map<int,list<int>> adj;
    for(int i=0;i<edges.size();++i){
        int v1 = edges[i][0];
        int v2 = edges[i][1];

        adj[v1].push_back(v2);
    }
    
    vector<bool> vis(v);
    queue<int> q;
    for(auto i : adj){
        for(auto j : i.second){
            indegree[j]++;
        }
    }
    for(int i=0;i<v;++i){
        if(indegree[i]==0){
            q.push(i);
        }
    }
    
    vector<int> res;
//     for(int i=0;i<v;++i){
//         if(!vis[i]){
//             bfs(adj,vis,q,i);
//         }
//     }
    while(!q.empty()){
        int frontNode = q.front();
        res.push_back(frontNode);
        q.pop();
        
        for(auto neighbour : adj[frontNode]){
            indegree[neighbour]--;
            if(indegree[neighbour]==0){
                q.push(neighbour);
            }
        }
    }
    return res;
}
