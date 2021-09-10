#include<bits/stdc++.h>
using namespace std;

void bills(vector<int>& bill,int k,int b){
    int sum = 0;
    for(int i=0;i<bill.size();++i){
            sum = sum + bill[i];
    }
    sum = sum - bill[k];
    //cout<<sum;
    if((sum)/2!=b){
        int diff = abs(b-(sum/2));
        cout<<diff;
    }
    else if((sum)/2==b){
        cout<<"Bon Appetit";
    }
}

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> bill;
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        bill.push_back(x);
    }
    int b;
    cin>>b;
    bills(bill,k,b);
}
