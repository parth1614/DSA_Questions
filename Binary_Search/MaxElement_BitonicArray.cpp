#include<bits/stdc++.h>
using namespace std;

int peak(vector<int> &vec, int start, int end){
    
    int m = vec.size();
    
    while(start<=end){
        
        int mid = start + (end-start)/2;
        
        if(mid>0 && mid<vec.size()-1){
            if((vec[mid]>vec[mid-1]) && (vec[mid]>vec[mid+1])){
                return mid;
            }
            else if(vec[mid-1]>vec[mid]){
                end = mid-1;
            }
            else if(vec[mid+1]<vec[mid]){
                start = mid+1;
            }
        }
        else if(mid==0){
            if(vec[0]>vec[1]){
                return 0;
            }
            // else{
            //     return 1;
            // }
        }
        else if(mid==m-1){
            if(vec[m-1]>vec[m-2]){
                return (m-1);
            }
            // else{
            //     return (m-2);
            // }
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
    
    int PeakElemAt = peak(vec,start,end);
    cout<<PeakElemAt;
}
