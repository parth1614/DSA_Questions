#include<bits/stdc++.h>
using namespace std;

int binary(vector<int> &vec, int start, int end, int elem){
    
     int mid = start + (end-start)/2;
    
    while(start<=end){
        if(vec[mid]==elem){
            return mid;
        }
        else if(elem>vec[mid]){
            return binary(vec, mid+1, end, elem);
        }
        else{
            return binary(vec, start, mid-1,end,elem);
        }
    }
    
    if(elem != vec[mid]){
        return -1;
    }
    
}

int func(vector<int> &vec, int start, int end, int elem){
    
    int left = binary(vec, start, mid-1, elem);
    int right = binary(vec, mid, end, elem);
    
    if(left == -1){
        return right;
    }
    else{
        return left;
    }
}

int main(){
    
    //Size of the array
    int n;
    cin>>n;
    
    //value of the element to be found
    int elem;
    cin>>elem;
    
    vector<int> vec;
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        vec.push_back(x);
    }
    
    int start = 0;
    int end = vec.size() - 1;
    
    int foundAt = func(vec, start, end, elem);
}
