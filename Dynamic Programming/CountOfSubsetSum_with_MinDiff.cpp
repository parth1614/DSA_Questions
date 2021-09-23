#include<bits/stdc++.h>
using namespace std;

int countSubsetGivenDiff(vector<int>& arr, int value, int n){
    vector<vector<int>> t;
    
    for(int i=0;i<n+1;++i){
         vector<int> temp;
        for(int j=0;j<value+1;++j){
           
            if(j==0 || (i==0&&j==0)){
                temp.push_back(1);
            }
            else if(i==0){
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
        for(int j=1;j<value+1;++j){
            if(arr[i-1]<=j){
                t[i][j] = t[i-1][j-arr[i-1]] + t[i-1][j];
            }
            else{
                t[i][j] = t[i-1][j];
            }
        }
    }
    
    return t[n][value];
}

int main(){
    int n;
    cin>>n;
    
    int diff;
    cin>>diff;
    
    vector<int> arr;
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int sum = 0;
    for(int i=0;i<n;++i){
        sum += arr[i];
    }
    
    int value = (diff + sum)/2;
    
    cout<<"Total numbers: "<<countSubsetGivenDiff(arr,value,n);
}
