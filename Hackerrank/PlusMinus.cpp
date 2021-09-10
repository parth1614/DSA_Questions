#include <bits/stdc++.h>

using namespace std;

void ratios(vector<int>& vec, int n){
    float pos=0;
    float neg=0;
    float zer=0;
    
    for(int i=0;i<vec.size();++i){
        if(vec[i]>0){
            pos = pos +1;
        }
        else if(vec[i]<0){
            neg = neg + 1;
        }
        else if(vec[i]==0){
            zer = zer + 1;
        }
    }
    
  vector<float> rat(3);
  rat[0] = (pos)/n;
  rat[1] = (neg)/n;
  rat[2] = (zer)/n;
  
  for(int i=0;i<3;++i){
      cout<<fixed;
      cout<<setprecision(6);
      cout<<rat[i]<<endl;
  }
}

int main(){
    vector<int> vec;
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        vec.push_back(x);
    }
    
    /*for(int i = 0;i<n;++i){
        cout<<vec[i]<<" ";
    }*/
    
    ratios(vec,n);
}
