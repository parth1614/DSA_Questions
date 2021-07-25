#include<bits/stdc++.h>
#include<string>
#include<sstream>
using namespace std;

void plusOne(vector<int> &vec){
    int vecSize = vec.size();
    vec[vecSize-1] = vec[vecSize-1]+1;
    
    for(int i=0;i<vecSize;++i){
        cout<<vec[i];
    }
}

int main(){
    vector<int> vec;
    int N;
    cin>>N;
    
    for(int i=0;i<N;++i){
        int x;
        cin>>x;
        vec.push_back(x);
    }
    
    plusOne(vec);
}
