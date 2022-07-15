#include<bits/stdc++.h>

using namespace std;

const int N = 1e6 + 10;

vector< pair<int, int> > adj_List[N]; // Creating N adjecency lists
// The vector of pair stores, connecting vertices and their corresponding weights on the edges


int main(){
    
    int v, e;
    cin>>v>>e;
    
    for(int i=0;i<e;++i){
        
        int v1, v2, wt;
        cin>>v1>>v2>>wt;
        
        adj_List[v1].push_back({v2, wt});
        adj_List[v2].push_back({v1, wt});
    }
    
    // adj_List[v1].first => gives the vertex it is connected to and .second gives the weight
    
}
