#include<bits/stdc++.h>
using namespace std;

int main(){
    
    // Size of Q queries => 10^ 7; Size of N => 10^ 7
    
    int n = 1e7 + 10;
    vector<bool> isPrime(n,true);
    
    for(int i=2; i<=n; ++i){ // Loop traverses N times
        if(isPrime[i]==true){
            for(int j= 2*i; j<=n; j += i){ // Loop Traverses Log(Log(N)) times because of the above 'true' check; If 'true' check wasn't there, it'd be Log(N) times.
                isPrime[j] = false;
            }
        }
    }
    
    int q;
    cin>>q;
    
    while(q--){
        int num;
        cin>>num;
        
        if(isPrime[num]){
            cout<<"Prime"<<endl;
        }
        else{
            cout<<"Not Prime"<<endl;
        }
    }
    
}
// Time Complexity of the Sieve Algo is => O(N(Log(Log(N)))) 
