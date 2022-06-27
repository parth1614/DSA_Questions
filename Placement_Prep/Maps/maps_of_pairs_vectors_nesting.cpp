#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    
    map<pair<string,string>,vector<int>> mp;
    
    for(int i=0;i<n;++i){
        string fn, ln;
        int count;
        cin>>fn>>ln>>count;
        
        for(int j=0;j<count;++j){
            int x;
            cin>>x;
            mp[{fn,ln}].push_back(x);
        }
    }
    
    for(auto &pr : mp){
        auto &first_name = pr.first.first;
        auto &last_name = pr.first.second;
        auto &num = pr.second;
        
        cout<<first_name<<" "<<second_name<<endl;
        
        for(auto &elem : num){
            cout<<elem<<" ";
        }
        cout<<endl;
    }
    
}
