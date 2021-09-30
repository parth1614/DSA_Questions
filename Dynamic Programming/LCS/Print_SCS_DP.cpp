class Solution {
public:
    string help(string &str1, string &str2){
        
        
     int n = str1.size();
     int m = str2.size();

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
            if(str1[i-1]==str2[j-1]){
                t[i][j] = 1 + t[i-1][j-1];
            }
            else{
                t[i][j] = max(t[i-1][j] , t[i][j-1]);
            }
        }
    }
    
    int i=n; 
    int j=m;
    string s="";
    while(i>0 && j>0){
        if(str1[i-1]==str2[j-1]){
            s.push_back(str1[i-1]);
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
    
    reverse(s.begin(),s.end());
    return s;
        
    }
    
    string shortestCommonSupersequence(string str1, string str2) {
    string ans="";
    int i1=0;
    int i2=0;
    for(char x:help(str1,str2)){
        while(str1[i1]!=x){
            ans=ans+str1[i1];
            i1++;
        }
        while(str2[i2]!=x){
            ans=ans+str2[i2];
            i2++;
        }
        ans=ans+x;
        i1++;
        i2++;
    }
    ans=ans+str1.substr(i1)+str2.substr(i2);    
    return ans;
    }
};
