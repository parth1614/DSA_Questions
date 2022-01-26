#include<bits/stdc++.h>
using namespace std;

int last(vector<int> &vec, int start, int end, int target){
    
    int mid = start + (end-start)/2;
    
    while(start<=end){
        
        if((mid==(vec.size()- 1 )|| target<=vec[mid+1]) && target==vec[mid]){
            
            return mid;
        }
        else if(target>vec[mid]){
            return last(vec,mid+1,end,target);
        }
        else{
            return last(vec,start,mid-1,target);
        }
       
    }
    
    //If the target element is not found, return -1
    if(target!=vec[mid]){
        return -1;
    }
    //return res;
}

int main(){
    int n;
    cin>>n;
    
    int target;
    cin>>target;
    
    vector<int> vec;
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        vec.push_back(x);
    }
    
    int start = 0;
    int end = vec.size() - 1;
    
    
    int foundAt = last(vec,start,end,target);
    
    cout<<foundAt;
}
