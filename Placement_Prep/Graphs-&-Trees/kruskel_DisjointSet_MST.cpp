#include<bits/stdc++.h>
bool cmp(vector<int> &a, vector<int> &b){
  return a[2] < b[2];  //Sort in the ascending order of weights;
    //The weights are found in the 3rd column
}

void makeSet(vector<int> &parent, vector<int> &rank, int n)
{
    for(int i=0;i<n;++i){
        parent[i] = i;
        rank[i] = 0;
    }
}

int findParent(vector<int> &parent, int node){
    if(parent[node]==node){
        return node;
    }
    //Path Contraction; setting new node as parent of previous node to move above to root
    return parent[node] = findParent(parent, parent[node]);
}

void Union(vector<int> &parent, vector<int> &rank, int v1, int v2)
{
    int p1 = findParent(parent, v1);
    int p2 = findParent(parent, v2);
    
    if(rank[p1]<rank[p2]){
        parent[v1] = p2;
    }
    else if(rank[p2]<rank[p1]){
        parent[v2] = p1;
    }
    else{
        parent[v1] = p2;
        rank[p2]++;
    }
}

int minimumSpanningTree(vector<vector<int>>& edges, int n)
{
    sort(edges.begin(),edges.end(),cmp);
        
    vector<int> parent(n);
    vector<int> rank(n);
    
    makeSet(parent,rank,n);
    int minWt = 0;
    
    for(int i=0;i<edges.size();++i){
        int v1 = edges[i][0];
        int v2 = edges[i][1];
        int wt = edges[i][2];
        
        int p1 = findParent(parent, v1);
        int p2 = findParent(parent,v2);
        
        if(p1 != p2){
            minWt += wt;
            Union(parent, rank, v1, v2);
        }
    }
    return minWt;
}
// TIme Complexity=> O(mlogn)
