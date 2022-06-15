pair<long long, long long> getMinMax(long long a[], int n) {
    
  //sort the array
     sort(a,a+n);
//     for(int i=0;i<n;++i){
//         cout<<a[i]<<" ";
//     }
  
  //create a pair data structure
    pair<long long, long long> minmax;
    
  //store the min value i.e. a[0] in minmax.fist and max value i.e. a[n-1] in minmax.second because the array was sorted
    minmax = make_pair(a[0],a[n-1]);
    return minmax;
    
}

//The Auxiliary time taken by this approach is: O(nlogn)

// x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x //

//Alternative approach of linear search with Time Complexity of: O(n)

pair<long long, long long> getMinMax(long long a[], int n) {
    
    long long maxi;
    long long mini;
    
  //If only 1 element
    if(n==1){
        maxi = a[0];
        mini = a[0];
    }
  
  //if 2 elements present
    else if(n==2){
         if(a[0]>a[1]){
        maxi = a[0];
        mini = a[1];
    }
    else{
        maxi = a[1];
        mini = a[0];
    }
    }
  
  
    //if more than 2 elements present
    else{
        
        if(a[0]>a[1]){
        maxi = a[0];
        mini = a[1];
    }
    else{
        maxi = a[1];
        mini = a[0];
    }
    
    for(int i=2;i<n;++i){
        if(a[i]>maxi){
            maxi = a[i];
        }
        else if(a[i]<mini){
            mini = a[i];
        }
    }
}
    pair<long long, long long> minmax;
    minmax = make_pair(mini,maxi);
    return minmax;
}
