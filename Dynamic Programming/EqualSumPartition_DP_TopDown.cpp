#include<bits/stdc++.h>
using namespace std;

bool EqualSumPart(vector<int>& arr, int n){
    int sum = 0;
    for(int i=0;i<n;++i){
        sum = sum + arr[i];
    }
    
   if(sum%2!=0){
       return false;
   }
   
  else if(sum%2==0){
        vector<vector<bool>> t;
    
    for(int i=0;i<n+1;++i){
        vector<bool> temp;
        for(int j=0;j<(sum/2)+1;++j){
            if(i==0){
                temp.push_back(false);
            }
            else if(j==0){
                temp.push_back(true);
            }
        }
        t.push_back(temp);
        temp.clear();
    }
    for(int i=1;i<n+1;++i){
        for(int j=1;j<(sum/2)+1;++j){
            if(arr[i-1]<=j){
                t[i][j] = (t[i-1][j-arr[i-1]] || t[i-1][j]);
            }
            else if(arr[i-1]>j){
                t[i][j] = t[i-1][j];
            }
        }
    }
    return t[n][sum/2];
  }
}

int main(){
    int n;
    cin>>n; //size of std::vector ;
    
    vector<int> arr;
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    if(EqualSumPart(arr,n)==true){
        cout<<"Equal sum partiotions exist";
    }
    else{
        cout<<"Equal sum partiotions doesn't exist";
    }
    
}
