#include<bits/stdc++.h>
using namespace std;

int solve(string &str, string &check)
{
    int n = str.size();
    int m = check.size();
    
    str = check + "X" + str;
    vector<int> pre(n+m+1);
    
    n = m + n + 1;
    
    int len = 0; int i = 1;
    
    pre[0] = 0;
    
    while(i<n){
        if(str[i]==str[len]){
            len++;
            pre[i] = len;
            i++;
        }
        else if(str[i] != str[len]){
            if(len==0){
                pre[i] = 0;
                i++;
            }
            else{
                len = pre[len-1];
            }
        }
    }
    
    int count = 0;
    for(auto i : pre){
        if(i==m) count++;
    }
    
    return count;
}

int main()
{
    string str;
    cin>>str;
    
    string check;
    cin>>check;
    
    cout<<solve(str, check);
}
