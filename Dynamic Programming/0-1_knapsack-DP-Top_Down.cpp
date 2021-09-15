#include<bits/stdc++.h>
using namespace std;


void knapsack(vector<int>& weight, vector<int>& value, int w, int n){
    
    vector<vector<int>> t;
    for(int i=0;i<n+1;++i){
        vector<int> temp;
        for(int j=0;j<w+1;++j){
                int x =0;
                temp.push_back(x);
        }
        t.push_back(temp);
        temp.clear();
    }
    
    for(int i=1;i<n+1;++i){
        for(int j=1;j<w+1;++j){
            if(weight[i-1]<=w){
                t[i][j] = max(value[i-1]+t[i-1][j-weight[i-1]], t[i-1][j]);
                
            }
            else{
               t[i][j] = t[i-1][j];
               
            }
        }
    }
    cout<<"Max Profit: "<<t[n][w];
   // return final;
   
//   vector<int> oneDimVector;
//  for(int i = 0; i < n+1; i++){
//      for(int j = 0; j < w+1; j++){
//         oneDimVector.push_back(t[i][j]);
//     }
//  }
//  vector<int>::iterator maxElement;
//  maxElement = max_element(oneDimVector.begin(), oneDimVector.end());
// cout<<"Max Profit: "<<*maxElement;
    
}

int main(){
    
    int n;
    int w;//Total weight of knapsack
    cin>>n;
    cin>>w;
    
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
    
  knapsack(weight,value,w,n);
}
