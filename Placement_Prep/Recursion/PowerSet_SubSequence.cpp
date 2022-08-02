#include<bits/stdc++.h>

void solver(vector<string> &res, string str, int start, string add){
    
    if(start<str.length()){
        //excluding
        solver(res, str, start + 1,add);
     
        //including
        char elem = str[start];
         add.push_back(elem);
        solver(res, str, start + 1,add);
    }
    else{
        if(add.length()>0){
            res.push_back(add);
        }
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
