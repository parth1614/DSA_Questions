#include<bits/stdc++.h>
using namespace std;

void print(int n){
   if(n<=0){
       return;
   }
   else{
       cout<<n<<" ";
       print(n-1);
   }
}

int main(){
    int n;
    cin>>n;
    
    if(n==1){
        cout<<1;
    }
    
    print(n);
}
