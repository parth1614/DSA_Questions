#include<bits/stdc++.h>

using namespace std;

const int N = 1e3 + 10;

int adj_matrix[N][N]; // It'll automatically be initialized with 0.

int main(){
    
    int v, e, wt;
    cin>>v>>e>>wt; //Vertices and edges;
    
    for(int i=0;i<e;++i){
        int v1, v2;
        cin>>v1,v2;
        
        // stores wieght instead of 1, we get to know that it is connected and weights can't be zero so wherever 0 is stored that means not connected
        adj_matrix[v1][v2] = wt;
        adj_matrix[v2][v1] = wt;
    }
    
}
// Space Complexity => O(N^2) // It'll fail after 10^4
