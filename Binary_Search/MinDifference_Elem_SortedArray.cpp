#include<bits/stdc++.h>
using namespace std;

int minDiff(vector<int> &vec, int start, int end, int key){
    
    
    while(start<=end){
        int mid = start + (end-start)/2;
        
        //if the key is present in the array, then it'll give the min absolute difference i.e. ZERO(0)
        if(vec[mid]==key){
            return key;
        }
        
        //Normal binary search ahead in the while loop
        
        else if(key<vec[mid]){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    
    //If the key is not present in the array
    
    //After the while loop terminates, when start goes to higher index than end, we take the absolute difference
    int upper = abs(vec[start]-key);
    //cout<<upper<<endl;
    
    //After the while loop terminates, when start goes to higher index than end, we take the absolute difference
    int lower = abs(vec[end]-key);
    //cout<<lower<<endl;
    
   //int Mindifference = min(upper,lower);
   //return Mindifference;
   //cout<<Mindifference;
   
   //Returning the element giving the minimum difference
   if(lower<upper){
       return  vec[end];
   }
   else{
       return vec[start];
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
    
    int key;
    cin>>key;
    
    int start = 0;
    int end = vec.size() - 1;
   // minDiff(vec,start,end,key);
    int diff = minDiff(vec,start,end,key);
    cout<<diff<<endl;
}
