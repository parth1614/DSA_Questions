#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    vector<int> prime_factors;
    
    for(int i=2;i<=n;++i){
        while(n%i==0){
            prime_factors.push_back(i);
            n = n/i;
        }
    }
    
    for(auto prime : prime_factors){
        cout<<prime<<" ";
    }
}
// This is a brute Force Approach
// Time Complexity => O(N) and not O(N^2)

// x-x-x-xx-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x //

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    vector<int> prime_factors;
    
    for(int i=2;i*i<=n;++i){
        while(n%i==0){
            prime_factors.push_back(i);
            n = n/i;
        }
    }
    
    if(n>1){
        prime_factors.push_back(n);
    }
    
    for(auto prime : prime_factors){
        cout<<prime<<" ";
    }
}

// Time Complexity => O(sqrt(N)) and not O(N^2);
