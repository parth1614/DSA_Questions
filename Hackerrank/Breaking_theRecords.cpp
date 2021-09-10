#include <bits/stdc++.h>

using namespace std;

void game(vector<int>& games){
    int sumH=0;
    int sumL=0;
    //sort(games.begin(),games.end());
    int small = games[0];
    int high = games[0];
    for(int i=0;i<games.size();++i){
        //for(int j=i+1;j<=games.size();++j){
            if(games[i+1]>high){
                sumH = sumH +1;
                high = games[i+1];
            }
            else if(small>games[i+1]){
                sumL = sumL + 1;
                small = games[i+1];
            }
       // }
    }
    //sumH = sumH-1;
   if(games[0]>0){
        sumL = sumL-1;
   }
   cout<<sumH<<" "<<sumL;
}

int main(){
    vector<int> games;
    int n;
    cin>>n;
    
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        games.push_back(x);
    }
    
    game(games);
}
