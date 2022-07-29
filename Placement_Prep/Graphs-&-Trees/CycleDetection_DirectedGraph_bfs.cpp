#include<bits/stdc++.h>
int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
  // Write your code here.
    unordered_map<int, list<int>> adj;
    for(int i=0;i<edges.size();++i){
        int v1 = edges[i].first - 1;
        int v2 = edges[i].second - 1;
        
        adj[v1].push_back(v2);
    }
    
    vector<int> indegree(n);
    for(auto i : adj){
        for(auto j : i.second){
            indegree[j]++;
        }
    }
    
    queue<int> q;
    for(int i=0;i<n;++i){
        if(indegree[i]==0){
            q.push(i);
        }
    }
       
     int count = 0;
     while(!q.empty()){
         int frontNode = q.front();
         q.pop();
         count++;
         for(auto neighbour : adj[frontNode]){
             indegree[neighbour]--;
             if(indegree[neighbour]==0){
                 q.push(neighbour);
             }
         }
     }
        if(count==n){
            return false;
        }
        else {
            return true;
        }
}
