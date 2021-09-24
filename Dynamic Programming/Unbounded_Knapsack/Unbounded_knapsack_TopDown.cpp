#include<bits/stdc++.h>
using namespace std;

int UnboundKnapsack(vector<int>& weight, vector<int>& value, int n,int w){
    vector<vector<int>> t;
    
    for(int i=0;i<n+1;++i){
        vector<int> temp;
        for(int j=0;j<w+1;++j){
            if(i==0 || j==0){
                temp.push_back(0);
            }
            else{
                temp.push_back(INT_MAX);
            }
        }
        t.push_back(temp);
        temp.clear();
    }
    
    for(int i=1;i<n+1;++i){
        for(int j=0;j<w+1;++j){
            if(weight[i-1]<=j){
                t[i][j] = max(value[i-1] + t[i][j-weight[i-1]] , t[i-1][j]);
            }
            else{
                t[i][j] = t[i-1][j];
            }
        }
    }
    
    return t[n][w];
}

int main(){
    int n;
    cin>>n;
    
    int w;
    cin>>w; //capacity of Knapsack
    
    vector<int> weight;
    vector<int> value;
    
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        weight.push_back(x);
    }
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        value.push_back(x);
    }
    
    cout<<"Max profit in unbounded is: "<<UnboundKnapsack(weight,value,n,w);
}
