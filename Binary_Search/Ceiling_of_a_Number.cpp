#include<bits/stdc++.h>
using namespace std;

int ceiling(vector<int> &vec,int start, int end, int target){
    
    int mid = (start+end)/2;
    
    
    while(start<=end){
        
        //If the target element is equal to the middle element, then return index of the middle element
        if(target==vec[mid]){
            return mid;
        }
        
        //If the target element is grater than the middle element
        else if(target>vec[mid]){
            
            //Now, if the element is either equal to the (mid+1)th element or is less than that && mid+1 index is obviously less than or equal to end to be in the bounds
            if(target<=vec[mid+1] && mid+1<=end){
                return mid + 1;
            }
            else{
                return ceiling(vec,mid+1,end,target);
            }
        }
        else if(target<vec[mid]){
            if(target>vec[mid-1] && mid-1>=start){
                return mid;
            }
            else{
                return ceiling(vec,start,mid-1,target);
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
    
    // for(int i=0;i<n;++i){
    //     cout<<vec[i]<<" ";
    // }
    
    int start = 0;
    int end = vec.size() - 1;
    
    //cout<<end<<endl;
    
    if(target>=vec[end] || target<=vec[start]){
        cout<<"out of bounds";
    }
    
    
    int foundAt = ceiling(vec,start,end,target);
    cout<<vec[foundAt]<<endl;
}
