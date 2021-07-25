#include<bits/stdc++.h>
#include<string>
#include<sstream>
using namespace std;

void lastWordLength(vector<string> &v){
    
   int vecSize = v.size()-1;
   int leng = v[vecSize].length();
   //cout<<vecSize<<endl;
   cout<<leng;
    
}

int main(){
    string str;
    string temp;
    getline(cin,str);
   stringstream X(str);
    vector<string> v;
    
    //splitting the string into words based on the whitespaces between the words
    while(getline(X,temp,' ')){
        v.push_back(temp);
    }
    
    /*for(int i=0;i<v.size();++i){
       cout<<v[i]<<endl;
    }*/
    
    lastWordLength(v);
}
