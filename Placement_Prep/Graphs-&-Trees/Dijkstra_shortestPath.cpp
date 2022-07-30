#include<bits/stdc++.h>
vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source) {
    unordered_map<int, list<pair<int, int>>> adj;
    for(int i=0;i<edges;++i){
        int v1 = vec[i][0];
        int v2 = vec[i][1];
        int weight = vec[i][2];
        
        adj[v1].push_back(make_pair(v2,weight));
        adj[v2].push_back(make_pair(v1,weight));
    }
    
    unordered_map<int, bool> vis;
    set<pair<int,int>> st;
    vector<int> dist;
    
    for(int i=0;i<vertices;++i){
        dist.push_back(INT_MAX);
    }
    
    st.insert(make_pair(0,source));
    vis[source] = true;
    dist[source] = 0;
    while(!st.empty()){
        auto topNode = *(st.begin());
        
           int NodeDist = topNode.first;
           int Node = topNode.second;
            st.erase(st.begin());
        
        for(auto neighbour : adj[Node]){
            if(NodeDist + neighbour.second < dist[neighbour.first]){
                
                auto record = st.find(make_pair(dist[neighbour.first], neighbour.first));
                if(record != st.end()){
                    st.erase(record);
                }
                dist[neighbour.first] = NodeDist + neighbour.second;
                st.insert(make_pair(dist[neighbour.first], neighbour.first));
            }
        }
    }
    return dist;
}
