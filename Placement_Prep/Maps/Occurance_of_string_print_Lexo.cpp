#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    int count = 1;
    map<string , int> mp;
    
    for(int i=0;i<n;++i){
        string s;
        cin>>s;
        // if(mp)
        // {
        //     count++;
        // }
        mp[s]++;
        
    }
    
    for(auto it=mp.begin();it!=mp.end();++it){
        cout<<it->first<<" "<<it->second<<endl;
    }
    
}
