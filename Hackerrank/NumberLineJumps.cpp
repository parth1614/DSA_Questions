#include <bits/stdc++.h>

using namespace std;

int main(){
    int x1,x2,v1,v2;
    cin>>x1>>v1>>x2>>v2;
    
    if(x1<0 || x1>10000){
        exit(0);
    }
    if(x2<0 || x2>10000){
        exit(0);
    }
    if(v1<1 || v1>10000){
        exit(0);
    }
    if(v2<1 || v2>10000){
        exit(0);
    }
    else{
        while(true){
        if(x1>x2 && v1>v2){
            cout<<"NO";
            break;
        }
         if(x2>x1 && v2>v1){
            cout<<"NO";
            break;
        }
         if(v1==v2){
            cout<<"NO";
            break;
        }
         if((x1=x1+v1)==(x2=x2+v2)){
            cout<<"YES";
            break;
        }
    }
    }

}
