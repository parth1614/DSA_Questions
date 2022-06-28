#include<bits/stdc++.h>
using namespace std;

vector<int> gne(vector<int>& vec){
    stack<int> st;
    vector<int> gni(vec.size());
    
    for(int i=0;i<vec.size();++i){
        while(!st.empty() && vec[i] > vec[st.top()] ){
            gni[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty()){
        gni[st.top()] = -1;
        st.pop();
    }
    
    return gni;
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
    vector<int> gnii = gne(vec);
    for(int i=0;i<n;++i){
        cout<<vec[i]<<" "<<(gnii[i]==-1 ? -1 : vec[gnii[i]])<<endl;
    }
}
