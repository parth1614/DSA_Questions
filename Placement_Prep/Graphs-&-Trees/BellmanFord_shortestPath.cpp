#include<bits/stdc++.h>
int bellmonFord(int n, int m, int src, int dest, vector<vector<int>> &edges) {
    vector<int> dist(n+1, 1e9);
    dist[src] = 0;
    
    for(int i=1;i<=n;++i){
        for(int j=0;j<m;++j){
            int v1 = edges[j][0];
            int v2 = edges[j][1];
            int wt = edges[j][2];
            
            if(dist[v1]!=(1e9) && (dist[v1] + wt < dist[v2])){
                dist[v2] = dist[v1] + wt;
            }
        }
    }
    
    // checking for negative cycles
    bool flag = false;
    for(int j=0;j<m;++j){
            int v1 = edges[j][0];
            int v2 = edges[j][1];
            int wt = edges[j][2];
            
            if(dist[v1]!=(1e9) && (dist[v1] + wt < dist[v2])){
                flag = true;
            }
    }
    if(flag==false){
        return dist[dest];
    }
    else{
        return -1;
    }
}
