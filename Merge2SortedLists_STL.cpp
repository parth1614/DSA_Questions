#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

void merge(vector<int> &list1, vector<int> &list2){
    
    vector<int> v(list1);
  
  //copying two vectors into an empty 3rd vector so as to join the lists
    v.insert(v.end(),list2.begin(),list2.end());
    
  //sorting the newly joined lists/vector
    sort(v.begin(),v.end());
    
    for(int i=0;i<v.size();++i){
        cout<<v[i]<<" ";
    }
    
    
    
}

int main(){
    
    vector<int> list1;
    vector<int> list2;
    
    int l1,l2; //size of the lists
    cin>>l1>>l2;
    
  //inputs for list 1
    for(int i=0;i<l1;++i){
        int x;
        cin>>x;
        list1.push_back(x);
    }
    
  //inputs for list 2
    for(int i=0;i<l2;++i){
        int y;
        cin>>y;
        list2.push_back(y);
    }
    
    merge(list1,list2);
    
    
}
