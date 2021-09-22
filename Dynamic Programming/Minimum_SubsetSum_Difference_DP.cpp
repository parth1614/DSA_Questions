#include<bits/stdc++.h>
using namespace std;


void subsetSum(vector<int>& arr,int range,int n){
    vector<vector<bool>> t;
    for(int i=0;i<n+1;++i){
        vector<bool> temp;
        for(int j=0;j<range+1;++j){
            if(j==0 || (j==0&&i==0)){
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
        for(int j=1;j<range+1;++j){
            if(arr[i-1]<=j){
                t[i][j] = (t[i-1][j-arr[i-1]] || t[i-1][j]);
            }
            else if(arr[i-1]>j){
                t[i][j] = t[i-1][j];
            }
        }
    }
  
    //storing half of the last row in the vector
    /*vector<bool> store(range/2);
    for(int i=0;i<store.size();++i){
        store[i] = t[n][i];
      //  cout<<store[i]<<endl;
    }*/
    
    int mini = INT_MAX;
    // for(int i=0;i<store.size();++i){
    //   if(store[i]==true){
    //         mini = min(mini,(range-i));
    //         //cout<<mini<<endl;
    //   }
    // }
    for(int i=range/2;i>=0;--i){
        if(t[n][i]==1){
            mini = range - 2*i;
            break;
        }
    }
   // return mini;
   //cout<<"Minimum SubsetSum diff is:  "<<abs(range-(2*mini));
   cout<<"final: "<<mini;
}

int main(){
    int n;
    cin>>n;
    
    vector<int> arr;
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int range = 0;
    for(int i=0;i<n;++i){
        range = range + arr[i];
    }
   // cout<<"The min subsetSum diff is: "<<subsetSum(arr,range,n);
   subsetSum(arr,range,n);
}
