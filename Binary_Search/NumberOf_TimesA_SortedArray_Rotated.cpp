#include<bits/stdc++.h>
using namespace std;

int rotated(vector<int> &vec, int start, int end){
    
    
    int min;
    int mid = start + (end-start)/2;
    int n = vec.size();
    while(start<=end){
        
        int prev = (mid + n - 1)%n;
        int next = (mid + 1)%n;
        
        if((vec[mid]<=vec[prev] && vec[mid]<=vec[next]) || mid==0){
            return mid;
        }
        else if(vec[mid]<=end){
            return rotated(vec, mid+1,end);
        }
        else if(vec[mid]>=start){
            return rotated(vec,start,mid-1);
        }
    }
}

int main(){
    int n;
    cin>>n;
    
    vector<int> vec;
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        vec.push_back(x);
    }
    
    int start = 0;
    int end = vec.size() - 1;
    
    cout<<rotated(vec, start, end);
}
