#include <iostream>
#include<algorithm>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;
    
    //If the integer is negative
    if(x<0){
        string neg = to_string(x); //Converting into string
        reverse(neg.begin()+1, neg.end()); //reverse the whole string except the minus sign i.e. leaving the first index
        int rev_neg = stoi(neg); //converting the string back to int
    cout<<rev_neg;
    }
    
    //When the integer is positive
    else{
        string num = to_string(x);
         reverse(num.begin(), num.end());
         int rev_num = stoi(num);
    cout<<rev_num;
    }
    
    
    
}
