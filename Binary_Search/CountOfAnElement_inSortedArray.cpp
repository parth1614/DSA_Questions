#include<bits/stdc++.h>
using namespace std;

int last(vector<int> &vec, int start, int end, int target){
    int flag=-1;
    int mid = start + (end-start)/2;
    int n = vec.size() - 1;
    while(start<=end){
        
      //either there is only one element in the vector or target element is less than or equal to vec[mid+1] so that there is no after occurance
      // and && target element is equal to the middle element
        if((mid==n || target<=vec[mid+1]) && target==vec[mid]){
            flag = mid;
            return flag;
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

int first(vector<int> &vec, int start, int end, int target){
    int flag=-1;
    int mid = start + (end-start)/2;
    
    while(start<=end){
        
      //either there is only one element in the vector or target element is greater than the vec[mid-1] so that there is no before occurance
      // and && target element is equal to the middle element
        if((mid==0 || target>vec[mid-1]) && target==vec[mid]){
            flag = mid;
            return flag;
        }
        else if(target>vec[mid]){
            return first(vec,mid+1,end,target);
        }
        else{
            return first(vec,start,mid-1,target);
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
    
    
    int LastfoundAt = last(vec,start,end,target);
   // cout<<LastfoundAt<<" ";
    int FirstFoundAt = first(vec,start,end,target);
    //cout<<FirstFoundAt<<" ";
    
    int count = LastfoundAt - FirstFoundAt + 1;
    
    cout<<count;
}
