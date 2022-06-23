#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    
    while(t--){
        
        multiset<long long> bag;
        
        int n;
        int k;
        cin>>n>>k;
        
        
        for(int i=0;i<n;++i){
           long long candy;
            cin>>candy;
            bag.insert(candy);
        }
        
        long long count = 0;
        
        for(int i=0;i<k;++i){
            auto last_candy = (--bag.end()); // The last Element is 1 before the end() 
            long long val = (*last_candy); // Value of the last candy, at which the iterator is pointing
            count += val;
            
            bag.erase(last_candy);
            bag.insert(val/2);
        }
            cout<<count<<endl;
    }
    
}
