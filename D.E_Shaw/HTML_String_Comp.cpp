#include <bits/stdc++.h>
#include<string>
using namespace std;

int same(vector<string> &str){
    int vecsize = str.size();
    int sum = 0;
    
    for(int i=0;i<vecsize;++i){
        if((str[i].compare(str[i+1]))==0){
            sum = sum+1;
        }
    }
    
    if(sum==vecsize-1){
        return 1;
    }
    
    else{
        return 0;
    }
    
}

int main() {
	vector<string> str;
	int n;
	cin>>n;
	for(int i=0;i<n;++i){
	    string x;
	    cin>>x;
	    str.push_back(x);
	}
}
