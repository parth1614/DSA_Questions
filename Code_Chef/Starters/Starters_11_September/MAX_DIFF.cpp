#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,s, val;
        cin>>n>>s;
        
        int sum = 0;
        
        sum = abs(s-n);
        val = abs(sum-n);
        cout<<val<<endl;
    }
}
