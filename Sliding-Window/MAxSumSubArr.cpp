#include<bits/stdc++.h>
using namespace std;

int window(vector<int> &vec, int n, int k){
    
    int sum = 0;
    int mx = INT_MIN;
    int i=0;
    int j=0;
    
    while(j<vec.size()){
        
        sum = sum + vec[j];
        
        if((j-i+1)<k){
            j++;
        }
        
        else if((j-i+1)==k){
            mx = max(mx,sum);
            sum = sum - vec[i]; //Sliding the window, so subtracting the initial (i)th sum
            i++;
            j++;
        }
    }
    return mx;
    
}

int main(){
    int n;
    cin>>n;
    
    int k;
    cin>>k;
    
    vector<int> vec;
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        vec.push_back(x);
    }
    
    int MaxSumSubArr = window(vec,n,k);
    cout<<MaxSumSubArr<<endl;
    
}
