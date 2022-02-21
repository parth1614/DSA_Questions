//A nearly sorted can have ith element at 3 positions:- (i-1)th, ith, and (i+1)th. 

#include<bits/stdc++.h>
using namespace std;

int nearly(vector<int> &vec, int start, int end, int key){
    
    int mid = start + (end-start)/2;
    
    while(start<=end){
      
      //Check if the element to be found is at the middle of the array
        if(key == vec[mid]){
            return mid;
        }
      
      //Check if the element is at (i-1)th position
        else if(key==vec[mid-1] && mid-1>=start){
            return mid-1;
        }
      
      //Check if the element is at (i+1)th position
        else if(key==vec[mid+1] && mid+1<=end){
            return mid+1;
        }
      
      //If not found at any of the above posistions, divide the array and look into the left side as element is less than middle element
        else if(key<vec[mid]){
            return nearly(vec,start,mid-2,key);
        }
      
      
      //If not found at any of the above posistions, divide the array and look into the right side as element is more than middle element
        else if(key>vec[mid+1]){
            return nearly(vec,mid+2,end,key);
        }
    }
    
}

int main(){
    
    int n;
    cin>>n;
    int key;
    cin>>key;
    
    vector<int> vec;
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        vec.push_back(x);
    }
    
    int start = 0;
    int end = vec.size() - 1;
    
    int foundAt = nearly(vec,start,end,key);
    cout<<foundAt<<endl;
}
