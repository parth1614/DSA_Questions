#include<bits/stdc++.h>
using namespace std;

//Function to print from 1 to N

    // void print1toN(int n){
        
    //     static int i = 1; //Static so that value of 'i' doesn't change at every call
        
    //     if(i<=n){
    //         cout<<i<<" ";
    //         i++;
    //     }
    //     else{
    //         exit(0);
    //     }
    //     print1toN(n);
    // }

//Function to print from N to 1

    void printNto1(int n){  
        if(n<=0){
            exit(0);
        }
        else{
          cout<<n<<" ";
        }
        
        printNto1(n-1);
        
    }

int main(){
    int n;
    cin>>n;
    
    print1toN(n);
    // cout<<endl;
    printNto1(n);
}
