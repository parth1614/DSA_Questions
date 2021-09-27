#include<bits/stdc++.h>
using namespace std;

void PrintLCS(string x, string y, int n, int m){
    vector<vector<int>> t;
    for(int i=0;i<n+1;++i){
        vector<int> temp;
        for(int j=0;j<m+1;++j){
            if(i==0 || j==0){
                temp.push_back(0);
            }
            else{
                temp.push_back(INT_MAX);
            }
        }
        t.push_back(temp);
        temp.clear();
    }
    

    
    for(int i=1;i<n+1;++i){
        for(int j=0;j<m+1;++j){
            if(x[i-1]==y[j-1]){
                t[i][j] = 1+ t[i-1][j-1];
            }
            else{
                t[i][j] = max(t[i-1][j] , t[i][j-1]);
            }
        }
    }
    // for(int i=0;i<t.size();i++){
    //     for(int j=0;j<t[0].size();j++){
    //         cout<<t[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    vector<char> s;
    
    int i=n; int j=m;
    
    while(i>0 && j>0){
        if(x[i-1] == y[j-1]){
            s.push_back(x[i-1]);
            cout<<i<<" ";
            i--;
            j--;
        }
        else{
            if(t[i][j-1]>t[i-1][j]){
                j--;
            }
            else{
                i--;
            }
        }
    }
    //cout<<s.size()<<endl;
    reverse(s.begin(),s.end());
    
    for(int k=0;k<s.size();++k){
        cout<<s[k];
    }
}

int main(){
    string x;
    string y;
    getline(cin,x);
    getline(cin,y);
    
    int n = x.length();
    int m = y.length();
    
    PrintLCS(x,y,n,m);
}
