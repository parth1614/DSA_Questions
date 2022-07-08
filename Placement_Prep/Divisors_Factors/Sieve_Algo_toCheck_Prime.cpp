#include<bits/stdc++.h>
using namespace std;

int main(){
    
    // Size of Q queries => 10^ 7; Size of N => 10^ 7
    
    int n = 1e7 + 10;
    vector<bool> isPrime(n,true);
    
    for(int i=2; i<=n; ++i){
        if(isPrime[i]==true){
            for(int j= 2*i; j<=n; j += i){
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
