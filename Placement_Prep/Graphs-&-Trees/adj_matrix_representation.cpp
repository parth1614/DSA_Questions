#include<bits/stdc++.h>

using namespace std;

const int N = 1e3 + 10;

int adj_matrix[N][N]; // It'll automatically be initialized with 0.

int main(){
    
    int v, e;
    cin>>v>>e; //Vertices and edges;
    
    for(int i=0;i<e;++i){
        int v1, v2;
        cin>>v1,v2;
        
        adj_matrix[v1][v2] = 1;
        adj_matrix[v2][v1] = 1;
    }
    
}
// Space Complexity => O(N^2) // It'll fail after 10^4
