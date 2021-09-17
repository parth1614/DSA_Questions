#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        //vector<vector<int>> vec;
        int vec[n][n];
        
        if(n%2==0){
            for(int i=0;i<n;++i){
                for(int j=0;j<n;++j){
                    vec[i][j] = -1;
                  //  cout<<vec[i][j];
                }
            }
        }
        
        else if(n%2!=0){
            for(int i=0;i<n;++i){
                for(int j=0;j<n;++j){
                   if(i==j){
                       vec[i][j] = -1;
                   }
                   else{
                       vec[i][j] = 1;
                   }
                }
            }
        }
        
        for(int i=0;i<n;++i){
            for(int j=0;j<n;++j){
                cout<<vec[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}
