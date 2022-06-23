#include<bits/stdc++.h>
using namespace std;


int main(){
    
    int n;
    cin>>n;
    
  unordered_set<string> s;
  
  for(int i=0;i<n;++i){
      string str;
      cin>>str;
      s.insert(str); // O(1)
  }
  
  int query;
  cin>>query;
  
  for(int i=0;i<query;++i){
      string in;
      cin>>in;
      auto it = s.find(in);
      if(it == s.end()){
          cout<<"No"<<endl;
      }
      else{
          cout<<"Yes"<<endl;
      }
  }
}

// Time Complexity of the code is O(N); As we are using unordered sets, so the Time Complexity of Insertion and Find operations become => O(1)
