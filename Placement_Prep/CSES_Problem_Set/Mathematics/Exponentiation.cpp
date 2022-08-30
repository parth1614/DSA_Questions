#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll solve(ll a, ll b)
{
    if(b==1) return a;
    if(b==0) return 1;
    
    if(b%2==0){
      ll sol = solve(a,b/2)%1000000007;
        return (sol%1000000007*sol%1000000007)%1000000007;
    }
    else{
        ll sol = solve(a,b/2)%1000000007;
        return (sol%1000000007*sol%1000000007*a)%1000000007;
    }
}

int main()
{
    ll q;
    cin>>q;
    
    while(q--){
        ll a, b;
        cin>>a>>b;
        
        cout<<solve(a,b)%1000000007<<endl;
    }
}
