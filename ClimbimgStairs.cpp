#include<bits/stdc++.h>
using namespace std;

void steps(int n){
    int prev1=1,prev2=1;
    int current;
    if(n==1){
        cout<<"1";
    }
    else if(n==2){
        cout<<"2";
    }
    else if(n>45){
     exit;
    }
    else{
       for(int i=2;i<=n;++i){
           current = prev1+prev2;
           prev1 = prev2;
           prev2 = current;
       }
       cout<<prev2;
    }
}

int main(){
    
    int n;// no. of steps
    cin>>n;
    
    steps(n);
}
