#include <iostream>
#include<algorithm>
#include<string>
#include<bits/stdc++.h>
using namespace std;

bool palindrome(int x){
     string num = to_string(x);
         reverse(num.begin(), num.end());
         int reversed = stoi(num);
   // cout<<reversed;
    
    if(reversed==x){
        return true;
    }
    else{
        return false;
    }
    
    
    
}

int main(){
    int x;
    cin>>x;
    palindrome(x);
}
