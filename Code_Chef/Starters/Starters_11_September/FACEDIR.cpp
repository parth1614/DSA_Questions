#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
    
        int x;
        cin>>x;
      //  string s;
                 if((x+1)%4==0)
                    {
                        cout<<"West"<<endl;
                    }
                
                else if((x+1)%4==2)
                    {
                        cout<<"East"<<endl;
                    }
                
            
            else if((x+1)%4==1)
          {
              cout<<"North"<<endl;
          }
            
        else if((x+1)%4==3)
       {
           cout<<"South"<<endl;
       }
        
        
    }
    
}
