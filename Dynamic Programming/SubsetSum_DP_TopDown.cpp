#include<bits/stdc++.h>
using namespace std;

bool subsetSum(int n,int sum, vector<int>& arr){
    vector<vector<bool>> t;
    for(int i=0;i<n+1;++i){
        vector<bool> temp;
       for(int i=0;i<n+1;++i){
        vector<bool> temp;
        for(int j=0;j<sum+1;++j){
            if(j==0 || (i==0&&j==0)){
               temp.push_back(true);
            }
            else if(i==0){
               temp.push_back(false);
            }
        }
        t.push_back(temp);
         temp.clear();
    }
    
    for(int i=1;i<n+1;++i){
        for(int j=1;j<sum+1;++j){
            if(arr[i-1]<=j){
                t[i][j] = (t[i-1][j-arr[i-1]] || t[i-1][j]);
            }
            else if(arr[i-1]>j){
                t[i][j] = t[i-1][j];
            }
        }
    }
    return t[n][sum];
}

int main(){
    int sum;
    cin>>sum;
    int n;
    cin>>n;
    vector<int> arr;
    
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    if(subsetSum(n,sum,arr)==true){
        cout<<"Subset found";
    }
    else{
        cout<<"Subset not found";
    }
}
