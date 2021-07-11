#include<algorithm>
#include<string>
#include<bits/stdc++.h>
using namespace std;

bool traverse_map(char value, map<char,char> &m){
    
    map<char,char>::iterator it = m.begin();
    
    while(it!=m.end()){
        
        if(it->second==value){
            return true;
        }
        it++;
    }
    return false;
}

bool check_bracket(vector<char> &v){
    int sum,sum1;
    stack <char> bracket;
    map<char,char> m;
    
    m[')'] = '(';
    m[']'] = '[';
    m['}'] = '{';
    
    for(int i=0; i<v.size();++i){
        
        if(traverse_map(v[i],m)){
            bracket.push(v[i]);
        }
        
        if(m.find(v[i]) != m.end()){
            
            if(bracket.empty()){
             return false;
            }
            
            if(bracket.top() != m[v[i]]){
                return false;
            }
           else{
            bracket.pop();
            }
        }
        
    }
    
    if(bracket.size() > 0)
    return false;
 else
    return true;
    
}

/*void check(vector<char> &v){
    
    //assigning unique keys the numers
    map<char,int> strin;
    strin['('] =  1;
    strin[')'] = -1;
    strin['['] =  2;
    strin[']'] = -2;
    strin['{'] =  3;
    strin['}'] = -3;
    int strsize = v.size();
    int sum = 0;
    int flag = 1;
    int k=0;
    
    for(int i=0;i<v.size();++i){
        if(flag==1){
        if(strin[v[i+1]] == -strin[v[i]]){
            sum = sum + 1;
        }
        else if(strin[v[i+2]]== -strin[v[i+1]]){
            sum = sum+1;
            flag=0;
            k = i+3;
        }
        }
        
        
        for(int j=i;j<k;++k){
            if(flag==0){
            if(strin[v[i+3]]==-strin[v[i]]){
                sum=sum+1;
            }
        }
        }
        
        flag=1;
    }
    cout<<sum<<endl;
    if(sum==strsize){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    
}*/

int main(){
    string str;
    cin>>str;
    
    vector<char> v(str.begin(), str.end()); //splitting string into a vector of Char
    
    check_bracket(v);
}
