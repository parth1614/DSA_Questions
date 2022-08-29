#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    set<long long> st;
    
    for(long long i=0;i<n;++i){
        long long x;
        cin>>x;
        st.insert(x);
    }
    
    cout<<st.size();
}

