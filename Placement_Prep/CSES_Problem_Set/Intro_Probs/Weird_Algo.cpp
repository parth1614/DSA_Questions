#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    vector<long long> vec;
    vec.push_back(n);
    while(n!=1){
        if(n%2==0){
            n = n/2;
            vec.push_back(n);
        }
        else{
            n = (n*3) + 1;
            vec.push_back(n);
        }
    }
     for(long long i=0;i<vec.size();++i){
         cout<<vec[i]<<" ";
     }   
}
