#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

void merge(vector<int> &list1){
    
for(int i=0;i<list1.size();++i){
    for(int j=i+1;j<list1.size();++j){
        if(list1[i]==list1[j]){
            vector<int>::iterator it = list1.begin()+j;
            list1.erase(it);
        }
    }
}

for(int i=0;i<list1.size();++i){
    for(int j=i+1;j<list1.size();++j){
        if(list1[i]==list1[j]){
            vector<int>::iterator it = list1.begin()+j;
            list1.erase(it);
        }
    }
}

for(int x=0;x<list1.size();++x){
    cout<<list1[x]<<" ";
}
    
}

int main(){
    
    vector<int> list1;
    
    int l1;
    cin>>l1;
    
    for(int i=0;i<l1;++i){
        int x;
        cin>>x;
        list1.push_back(x);
    }
    
    
    merge(list1);
    
    
}
