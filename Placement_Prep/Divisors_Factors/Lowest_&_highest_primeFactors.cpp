#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int N = 1e7 + 10;
    vector<bool> is_prime(N,true);
    vector<int> lowest_prime(N,0);
    vector<int> highest_prime(N,0);
    
    for(int i=2; i<N; ++i){
        if(is_prime[i] == true){
            lowest_prime[i] = highest_prime[i] = i;
            
             for(int j= 2*i; j<N; j += i){
                is_prime[j] = false;
                
                highest_prime[j] = i;
                
                if(lowest_prime[j] == 0){
                    lowest_prime[j] = i;
                }
            }
        }
            
    }
    
    int num;
    cin>>num;
    cout<<lowest_prime[num] <<" " << highest_prime[num];
}
