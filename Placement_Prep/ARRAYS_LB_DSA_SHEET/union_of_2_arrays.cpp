class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
    //     //code here
    //     int count = n + m;
    //   // vector<int> un;
    //   int countuni = 0;
    //     int flag = 0;
    //     int final_count = 0;
        
    //     sort(a,a+n);
    //     sort(b,b+n);
        
    //     for(int i=0;i<n;++i){
    //       if(flag>m){
    //           flag = 0;
    //       }
    //       else{
    //           if(a[i]==b[flag]){
    //               countuni += 1;
                   
    //           }
    //       }
    //     }
        
    //     final_count = count - countuni;
    
    //creating a map container
    map<int, int> mp;
    
    //map can only have unique keys, that's why storing each array's elements in the map so that the duplicate elements can't be there i.e. UNION of the two arrays
    for(int i=0;i<n;++i){
        mp.insert({a[i],i});
    }
    for(int i=0;i<m;++i){
        mp.insert({b[i],i});
    }
    
    // for(auto itr = mp.begin(); itr!=mp.end();++itr){
        
    // }
    
    int val = mp.size();
    return val;
    }
};

//The Time Complexity of the function is O(n+m), because insert function takes linear time
