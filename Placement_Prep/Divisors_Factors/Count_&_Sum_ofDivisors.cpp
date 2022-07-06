#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count = 0;
    int sum = 0;
    
    for(int i=1;i<=n;++i){
        
        //if n is divisible by any integer i, then it is a Divisor
        if(n%i == 0){
            count += 1;
            sum += i;
            cout<<i<<endl;
            
        }
        
    }
    
    // count of divisors and sum of all the divisors
    cout<<count<<" "<<sum;
}

//Time complexity => o(N); because we traverse till the nth integer. This is the Brute Force Approach
