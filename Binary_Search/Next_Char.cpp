#include<bits/stdc++.h>
using namespace std;

auto alpha(vector<char> &vec, int start, int end, auto key){
    
    
//     int answer = -1;
    int flag = 0;
    
    while(start<=end){
        
        int mid = start + (end-start)/2;
        
        //If the key is present at the mid, then return the (mid+1)th element and counter the flag as 1
        if(vec[mid]==key){
             flag = 1;
            return vec[mid+1];
        }
        
        //If the key is less than the middle element, then assign end-->mid-1
        else if(vec[mid]>key){
            end = mid - 1;
           // answer = mid;
        }
        
        
        else if(vec[mid]<key){
            start = mid + 1;
        }
    }
    
    //If the value of the flag is zero i.e. the Key Char is not found, then we return -1
    if(flag==0){
        return -1;
    }
    
}

int main(){
    int n;
    cin>>n;
    char key;
    cin>>key;
    
    vector<char> vec;
    for(int i=0;i<n;++i){
        char val;
        cin>>val;
        vec.push_back(val);
    }
    
    int start = 0;
    int end = vec.size() - 1;
    
    auto found = alpha(vec,start,end,key);
    cout<<found<<endl;
}

