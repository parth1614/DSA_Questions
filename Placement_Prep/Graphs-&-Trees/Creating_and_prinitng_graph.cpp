vector < vector < int >> printAdjacency(int n, int m, vector < vector < int >> & edges) {
    // Write your code here.
    
    vector<int> links[n];
        
        for(int i=0;i<m;++i){
            int v1 = edges[i][0];
            int v2 = edges[i][1];
            
            links[v1].push_back(v2);
            links[v2].push_back(v1);
        }
    
    vector<vector<int>> adj(n);
    
    for(int i=0;i<n;++i){
        adj[i].push_back(i);
        
        for(int j=0;j<links[i].size();++j){
            adj[i].push_back(links[i][j]);
        }
    }
    
    return adj;
}
