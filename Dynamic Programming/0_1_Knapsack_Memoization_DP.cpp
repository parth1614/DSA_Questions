#include<bits/stdc++.h>
using namespace std;

int knapsack(vector<int>& weight, vector<int>& value, int W, int n){
    
    vector<vector<int>> t; //2D matrix and initialize it with -1
    
    for(int i=0;i<n+1;++i){
        vector<int> temp;
        for(int j=0;j<W+1;++j){
            int x=-1;
            
            temp.push_back(x);
        }
        t.push_back(temp);
        temp.clear();
    }
    
    if(n==0 || W==0){
        return 0;
    }
    
    if(t[n][W]!=-1){
        return t[n][W];
    }
    
    if(weight[n-1] <= W){
        return t[n][W] = max(value[n-1]+knapsack(weight,value,W-weight[n-1],n-1), knapsack(weight,value,W,n-1));
    }
    
   else if(weight[n-1]>W){
        return t[n][W] = knapsack(weight,value,W,n-1);
    }
    
}

int main(){
    vector<int> weight;
    vector<int> value;
    
    int n; //number of items
    cin>>n;
    int W;// Max wright of knapsack
    cin>>W;
    
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
    
    
    
    cout<<"Max Profit "<<knapsack(weight,value,W,n);
}
