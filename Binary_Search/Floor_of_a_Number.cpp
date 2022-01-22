#include<bits/stdc++.h>
using namespace std;

int Floor(vector<int> &vec, int start, int end, int target){
    
    int mid = (start+end)/2;
    
    while(start<=end){
        
      //If the target element is at mid index, return mid directly
        if(target==vec[mid]){
            return mid;
        }
        
      //If target elemnent is less than the elemnent present at the middle element
      //Either it's greater than or equal to the element present at the mid-1 index or either it's smaller than that
      //In the later case, we return the Floor function again
        else if(target<vec[mid]){
            if(target>=vec[mid-1] && mid-1>=start){
                return mid-1;
            }
            else{
                return Floor(vec,start,mid-1,target);
            }
        }
        
        else if(target>vec[mid]){
            if(target<vec[mid+1] && mid+1<=end){
                return mid;
            }
            else{
                return Floor(vec,mid+1,end,target);
            }
        }
    }
    
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
    int end = vec.size()-1;
    
    int foundAt = Floor(vec,start,end,target);
    
    cout<<vec[foundAt];
}
