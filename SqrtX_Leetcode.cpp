#include<bits/stdc++.h>
using namespace std;

void squareRoot(int num){
    
    if(num<2){
        cout<<num;
    }
    
    int right = (num/2);
    int left  = 1;
    
        while (left <= right) {
            int mid = (right + left) / 2;
            if ((long)mid*mid >num) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        cout<<right;
    }


int main(){
    int num;
    cin>>num;
    squareRoot(num);
}
