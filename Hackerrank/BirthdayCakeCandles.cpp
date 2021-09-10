#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> candels;
    int n;
    cin>>n;
    
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        candels.push_back(x);
    }
    
    sort(candels.begin(),candels.end());
    int sum = 0;
    for(int i=0;i<n;++i){
        if(candels[n-1]==candels[i]){
            sum = sum + 1;
        }
    }
    cout<<sum;
}
