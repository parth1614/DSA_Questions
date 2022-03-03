#include<bits/stdc++.h>
using namespace std;

void FirstNeg(vector<int> &vec, int n, int k){
    
    int i=0;
    int j=0;
    vector<int> res;
    list<int> store;
    while(j<vec.size()){
        
         if(vec[j]<0){
           store.push_back(vec[j]); 
        }
        
        if((j-i+1)<k){
            j++;
        }
       
        else if((j-i+1)==k){
            
            if(store.size()==0){
                res.push_back(0);
            }
            else{
                
                //If the List is not empty, we'll push back the front element in the result vetor, because it'll be the first negative number
                res.push_back(store.front());
                
                if(vec[i]==store.front()){
                    store.pop_front();
                }
            }
            i++;
            j++;
        }
        
    }
    for(int i=0;i<res.size();++i){
        cout<<res[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    
    int k;
    cin>>k;
    
    vector<int> vec;
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        vec.push_back(x);
    }
    
    FirstNeg(vec,n,k);
}
