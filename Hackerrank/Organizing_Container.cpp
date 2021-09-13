#include <bits/stdc++.h>

using namespace std;

void swap(vector<vector<int>>& container){
    vector<int> sum(container.size(),0);
    vector<int> type(container.size(),0);
    int flag;
    //long sum = 0;
     for(int i=0;i<container.size();++i){
    for(int j=0;j<container.size();++j){
             sum[i] = sum[i] + container[i][j]; //Adding rows in single cell
             type[j] = type[j] + container[i][j]; //adding columns in single cell
         }
         
     }
     sort(sum.begin(),sum.end());
     sort(type.begin(),type.end());
     for(int i=0;i<container.size();++i){
         if(sum[i]!=type[i]){
             flag = 0;
         }
         else {
             flag = 1;
         }
     }
     if(flag==0){
         cout<<"Impossible"<<endl;
     }
     else if(flag==1){
         cout<<"Possible"<<endl;
     }
   
}

int main(){
    int q;
    cin>>q;
    
    while(q--){
        vector<vector<int>> container;
        int n;
        cin>>n;
        
        for(int i=0;i<n;++i){
            vector<int> temp;
            for(int j=0;j<n;++j){
               int val;
                cin>>val;
                temp.push_back(val);
            }
            container.push_back(temp);
            temp.clear();
        }
        swap(container);
    }
}
