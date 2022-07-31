#include<bits/stdc++.h>
vector<pair<pair<int, int>, int>> calculatePrimsMST(int n, int m, vector<pair<pair<int, int>, int>> &g)
{
    unordered_map<int, list<pair<int,int>>> adj;
    for(int i=0;i<g.size();++i){
        int v1 = g[i].first.first;
        int v2 = g[i].first.second;
        int w = g[i].second;
        
        adj[v1].push_back(make_pair(v2,w));
        adj[v2].push_back(make_pair(v1,w));
    }
    
    vector<int> key(n+1);
    vector<bool> mst(n+1);
    vector<int> parent(n+1);
    for(int i=0;i<=n;++i){
        key[i] = INT_MAX;
        parent[i] = -1;
        mst[i] = false;
    }
    
    key[1] = 0;
    for(int i=1;i<n;++i){
        int mini = INT_MAX;
        int node;
        
        for(int curr = 1;curr<=n;++curr){
            if(key[curr]<mini && mst[curr]==false){
                node = curr;
                mini = key[curr];
            }
        }
        mst[node] = true;
        
        for(auto neighbour: adj[node]){
            int v = neighbour.first;
            int w = neighbour.second;
            if(mst[v]==false && w<key[v]){
                parent[v] = node;
                key[v] = w;
                //mst[v] = true;
            }
        }
    }
    vector<pair<pair<int,int>,int>> result;
    for(int i=2;i<=n;++i){
        result.push_back({{parent[i],i},key[i]});
    }
    return result;
}
