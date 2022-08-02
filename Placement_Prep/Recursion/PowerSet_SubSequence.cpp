#include<bits/stdc++.h>

void solver(vector<string> &res, string str, int start, string add){
    
    if(start<str.length()){
        //excluding
        solver(res, str, start + 1,add);
     
        //including
        char elem = str[start];
         add.push_back(elem);
        res.push_back(add);
        solver(res, str, start + 1,add);
    }
    else{
        
        return ;
    }
}

vector<string> subsequences(string str){
    vector<string> res;
    string add = "";
    int start = 0;
    solver(res, str, start, add);
    return res;
}
