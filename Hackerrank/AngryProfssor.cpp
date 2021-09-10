#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,k;
        int sum=0;
    cin>>n>>k;
    vector<int> vec;
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        vec.push_back(x);
    }
    
    for(int i=0;i<vec.size();++i){
        if(vec[i]<=0){
            sum = sum + 1;
        }
    }
    if(sum>=k){
        cout<<"NO"<<endl;
        //cout<<sum<<endl;
    }
    else if(sum<k){
        cout<<"YES"<<endl;
        //cout<<sum<<endl;
    }
    vec.clear();
    sum = 0;
    }
}
