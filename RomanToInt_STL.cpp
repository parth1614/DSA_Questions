#include<algorithm>
#include<string>
#include<bits/stdc++.h>
using namespace std;

void roman_int(vector<char> &s){
   map<char,int> roman;
   roman['M'] = 1000;
   roman['D'] = 500;
   roman['C'] = 100;
   roman['L'] = 50;
   roman['X'] = 10;
   roman['V'] = 5;
   roman['I'] = 1;
   
   int res=0;
   for(int i=0;i<s.size();++i){
       if(roman[s[i]]<roman[s[i+1]]){
           res -= roman[s[i]];
       }
       else{
           res += roman[s[i]];
       }
   }
  // res += roman[s[s.size()-1]];
   cout<<res;
}

int main(){
    string numeral;
    cin>>numeral;
    
    vector<char> s(numeral.begin(), numeral.end()); //Splitting the string to characters
    
    roman_int(s);
}
