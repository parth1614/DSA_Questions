class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	    // code here
	   // auto it2 = begin(&*arr2*);
	   //auto it = end(arr1);
	  
	   //--it;
	   
	   int it = (n-1);
	   int it2 = (0);
	   while(it>=0 && it2<m){
	       if(arr1[it]>arr2[it2]){
	           swap(arr1[it],arr2[it2]);
	       }
	       it--;
	       it2++;
	   }
	   sort(arr1,arr1+n);
	   sort(arr2,arr2+m);
	      
	}
};
