#include<bits/stdc++.h>
using namespace std;

int Anagram(string str, string pattern,int k ){
    
    //Defining a map to store the frequency of chars present in the pattern string
    unordered_map<char,int> val;
    for(int i=0;pattern[i];++i){
        
        //if a char not found, make a pair with value of 1
        if(val.find(pattern[i])==val.end()){
            val.insert(make_pair(pattern[i],1));
        }
        //else increment the value of the found char
        else{
            val[pattern[i]]++;
        }
    }
    
    int answer = 0;
    int i=0;
    int j=0;
    int count = val.size();
    
    while(j<str.length()){
        
        //If we find the char of str in the map, then we reduce the count of that char by 1
        if(val.find(pattern[j])==str[j]){
            val[str[j]]--;
        }
        
        //If the value of any char gets '0', we decrement the count by 1. So, if the count gets '0'
        //we know that all the chars for anagram have been found, and we'll return answer
        if(val[pattern[j]]==0){
            count--;
        }
        
        //If the size of the window hasn't been matched yet, we increment j
        //Window size = pattern.length()
        if((j-i+1)<k){
            j++;
        }
        
        //if the window size has been matched
        else if((j-i+1)==k){
            
            if(count==0){
                answer++;
            }
        }
        //For sliding the window::
        
        //increment the value of chars once again
        val[str[j]]++;
        i++;
        j++;
        
        if(count==1){
            count++;
        }
        
    }
    
    return answer;
}

int main(){
    string str;
    string pattern;
    
    getline(cin,str);
    getline(cin,pattern);
    
    int k = pattern.length();
    
    int occurances = Anagram(str,pattern,k);
    cout<<occurances<<" ";
}
