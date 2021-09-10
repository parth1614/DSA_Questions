#include<bits/stdc++.h>
using namespace std;

void calcDistance(vector<int>& apple, vector<int>& oranges, int s, int t, int a, int b, int m, int n){
    int sumA=0, sumB=0;
    for(int i=0;i<m;++i){
        int fall = apple[i]+a;
        if(fall>=s && fall<=t){
            sumA = sumA + 1;
        }
    }
    
    for(int i=0;i<n;++i){
        int fall1 = oranges[i] + b;
        if(fall1>=s && fall1<=t){
            sumB = sumB + 1;
        }
    }
    cout<<sumA<<endl;
    cout<<sumB;
}

int main(){
    vector<int> apple;
    vector<int> oranges;
    int s,t;//house length
    int a,b;//locations of trees
    int m,n;//d for apples and oranges
    
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;
    
    for(int i=0;i<m;++i){
        int x;
        cin>>x;
        apple.push_back(x);
    }
    
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        oranges.push_back(x);
    }
    
    calcDistance(apple,oranges, s, t, a, b,  m, n);
}
