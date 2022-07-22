#include<bits/stdc++.h>
using namespace std;

class graph{
  
  public:
    
    unordered_map<int, list<int>> adjList;
    
    void addEdges(int v1, int v2, bool direction){
        
        adjList[v1].push_back(v2);
        
        // Un-directed graph
        if(direction==0){
            adjList[v2].push_back(v1);
        }
    }
    
    void printList(){
        
        for(auto i : adjList){
            cout<<i.first<<"-> ";
            
            for(auto j : i.second){
                cout<<j<<" ";
            }
            cout<<endl;
        }
        
    }
    
};

int main(){
    
    int vertex, edges;
    cin>>vertex>>edges;
    
    graph g;
    
    for(int i=0;i<edges;++i){
        int v1, v2;
        cin>>v1>>v2;
        g.addEdges(v1,v2,0);
    }
    
    g.printList();
}

/* Inputs => 
5 6
0 1
1 2
2 3
3 1
3 4
0 4
*/

/* Output =>
4-> 3 0 
3-> 2 1 4 
2-> 1 3 
0-> 1 4 
1-> 0 2 3
*/
