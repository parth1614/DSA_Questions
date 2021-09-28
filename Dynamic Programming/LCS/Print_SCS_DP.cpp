#include<bits/stdc++.h>
using namespace std;

string ShortestComSuperSeq(string x, string y, int n, int m){
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
        for(int j=1;j<m+1;++j){
            if(x[i-1] == y[j-1]){
                t[i][j] = 1 + t[i-1][j-1];
            }
            else{
                t[i][j] = max(t[i-1][j] , t[i][j-1]);
            }
        }
    }
    
   t[n][m] = (m+n) - t[n][m];
    
    string str;
    
    int i=n; int j=m;
    while(i>0 && j>0){
        if(x[i-1]==y[j-1]){
            str.push_back(x[i-1]);
            i--;
            j--;
        }
        else if(t[i][j-1]>t[i-1][j]){
            str.push_back(y[j-1]);
            j--;
        }
        else{
            str.push_back(x[i-1]);
            i--;
        }
    }
    
    while(i>0){
        str.push_back(x[i-1]);
        i--;
    }
    while(j>0){
        str.push_back(y[j-1]);
        j--;
    }
     reverse(str.begin(),str.end());
    
    return str;
}

int main(){
    string x;
    string y;
    getline(cin,x);
    getline(cin,y);
    
    int n = x.length();
    int m = y.length();
    
    cout<<ShortestComSuperSeq(x,y,n,m);
}
