#include<bits/stdc++.h>

using namespace std;

const int N = 1e6 + 10;

vector<int> adj_List[N]; // Creating N adjecency lists

int main(){
    
    int v, e;
    cin>>v>>e;
    
    for(int i=0;i<e;++i){
        
        int v1, v2;
        cin>>v1>>v2;
        
        adj_List[v1].push_back(v2);
        adj_List[v2].push_back(v1);
    }
    
}
//Time Complexity => o(V + E) 
