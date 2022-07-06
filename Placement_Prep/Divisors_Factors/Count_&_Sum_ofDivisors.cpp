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

// x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x //

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count = 0;
    int sum = 0;
    
    // Iterate the loop for sqrt(N) times and if n is divisible by i, then those would be half of the divisors.
    // and we can also calculate the next set of divisors in the same iteration because n/i would also be a divisor
    // 2x12 = 24 (2 is a divisor); 24/12 i.e. 12x2 (12 is also a divisor) therefore n/i also a divisor 
    for(int i=1; i*i<= n; ++i){
        
        if(n%i == 0){
            cout<<i<<endl;
            cout<<n/i<<endl;
            count += 1;
            sum += i;
            
            if(n/i != i){
                count += 1;
                sum += n/i;
            }
        }
    }
    
    // count of divisors and sum of all the divisors
    cout<<count<<" "<<sum;
}

//Time complexity => o(sqrt(N)); because we traverse till the sqrt(Nth) integer. This is a bit optimal Approach, bu not the most optimized one
