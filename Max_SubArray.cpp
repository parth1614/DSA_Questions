#include<bits/stdc++.h>
using namespace std;

void largestSub(vector<int> &array){
    
     int currentSum = 0, totalSum = INT_MIN;
        
        for(int i=0; i<array.size(); i++) {
            
            //Sum till this point = Current Sum till this point + this element
            currentSum = currentSum + array[i]; 
            
            //If the current maximum array sum is greater than the global total. Update it
            totalSum = max(totalSum, currentSum);
            
            //If you get current as less than 0, Make it 0
            currentSum = max(0,currentSum);
    }
        
    cout<<"The sum is: "<<totalSum;
}

int main(){
    vector<int> array;
    int n;
    cin>>n;
    
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        array.push_back(x);
    }
    
    largestSub(array);
}
