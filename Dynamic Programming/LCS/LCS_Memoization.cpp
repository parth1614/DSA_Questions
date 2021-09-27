#include<bits/stdc++.h>
using namespace std;

int LCS(string x, string y, int n, int m){
    
    vector<vector<int>> t;
    for(int i=0;i<n+1;++i){
        vector<int> temp;
        for (int j=0;j<m+1;++j){
            temp.push_back(-1);
        }
        t.push_back(temp);
        temp.clear();
    }
    
    
    if(n==0 || m==0){
        return 0;
    }
    else if(t[n][m]!=-1){
        return t[n][m];
    }
    
    else if(x[n-1]==y[m-1]){
        return t[n][m] = 1+LCS(x,y,n-1,m-1);
    }
    
    else{
        return t[n][m] = max(LCS(x,y,n-1,m) , LCS(x,y,n,m-1));
    }
    
}

int main(){
    string x;
    string y;
    getline(cin,x);
    getline(cin,y);
    
    int n = x.length();
    int m = y.length();
//std::cout <<n<<" "<<m<< std::endl;
    
    cout<<LCS(x,y,n,m);
}
