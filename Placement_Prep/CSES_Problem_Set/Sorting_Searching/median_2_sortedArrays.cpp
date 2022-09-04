class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
      multiset<int> st;
        for(int i=0;i<nums1.size();++i){
            st.insert(nums1[i]);
        }
        for(int i=0;i<nums2.size();++i){
            st.insert(nums2[i]);
        }
        
        int count = 0;
        //cout<<st.size();
      if((st.size())%2!=0){
            for(auto &itr : st){  
            if(count==(st.size())/2) return itr;
                count++;
        }
      }
        count = 0;
         double x,y;
       
        for(auto &it : st){
           
            if(count==(st.size()/2)-1){
                x = it;
                //cout<<x;
               //advance(*it,1);
                //y = it
                //cout<<y;
               // y = it;
              //break;
            }
            if(count==(st.size()/2)) {
                y = it;
                break;
            }
            count++;
        }
          return (x+y)/2;
    }
};
