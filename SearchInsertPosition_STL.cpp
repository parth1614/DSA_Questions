#include<bits/stdc++.h>
using namespace std;

void finding(vector<int> &nums, int target){
    
    int flag=0;
    int vecsize=nums.size();
    for(int i=0;i<nums.size();++i){
        if(nums[i]==target){
            cout<<i<<endl;
            flag = 1;
            cout<<flag;
        }
    }
    
    //When the element is not found, the flag is 0
    //checking the corner cases, i.e. Highest or lowest target
    if(flag==0){
        if(nums[0]>target){
                cout<<0;
                flag =1;
            }
            else if(nums[vecsize-1]<target){
                cout<<vecsize;
                flag=1;
            }
    }
    
    //if the target is in middle somehwere
    if(flag==0){
        
        for(int i=0;i<nums.size();++i){
            
            if(nums[i]<target&&nums[i+1]>target){
                int pos = i+1;
                cout<<pos;
            }
        }
    }
    
}

int main(){
    vector<int> nums;
    int N;
    cin>>N;//Size of the vector
    
    //Input the values in the vector
    for(int i=0;i<N;++i){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    
    int target;
    cin>>target;
    
    finding(nums,target);
    
}
