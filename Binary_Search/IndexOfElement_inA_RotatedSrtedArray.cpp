#include<bits/stdc++.h>
using namespace std;

int func(vector<int> &vec,int start,int end, int x){
    
    int mid = start + (end-start)/2;
    int n = vec.size();
    
    while(start<=end){
        
        // int prev = (mid + n-1)%n;
        // int end = (mid - 1)%n;
        
        if(vec[mid] == x){
            return mid;
        }
        
        //If the right part of the array is sorted, we'll search in that space
        if(vec[mid] <= end){
            
            //check if the element can be present in the right sorted search space
            if(x>vec[mid] && x<=vec[end]){
                return func(vec,mid+1,end,x);
            }
            
            //else the element is not in right search space, then we eleminate this and consider left
            else{
                return func(vec,start,mid-1,x);
            }
        }
        
        //If the left part of the array is sorted, we'll search in that space
        if(vec[mid] >= start){
            
            if(x<vec[mid] && x>=vec[start]){
                return func(vec,start,mid-1,x);
            }
            else{
                return func(vec,mid+1,end,x);
            }
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
    
    int x;
    cin>>x;
    
    int start = 0;
    int end = vec.size() - 1;
    
    int foundAt = func(vec,start,end,x);
    cout<<foundAt<<endl;
}
