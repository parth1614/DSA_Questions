class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        
        int flag_neg=0;
        //int flag_pos=0;
        
        // vector<int> neg;
        // vector<int> pos;
        
        // for(int i=0;i<n;++i){
        //     if(arr[i]<0){
        //         flag_neg += 1;
                
        //     }
        //     else{
        //         flag_pos += 1;
        //     }
        // }
        int countn = 0;
        int countp = 0;
      
      //Arrays to store positive and negative elements seperately
        vector<int> neg;
        vector<int> pos;
       // cout<<neg.size()<<" "<<pos.size();
        
        for(int i=0;i<n;++i){
            if(arr[i]<0){
                neg.insert(neg.begin() + countn,arr[i]);
                countn += 1;
            }
            else{
                pos.insert(pos.begin() + countp,arr[i]);
                countp += 1;
            }
        }
        
        // for(int i=0;i<neg.size();++i){
        //     cout<<neg[i]<<" "<<endl;
        // }
        // for(int i=0;i<pos.size();++i){
        //     cout<<pos[i]<<" "<<endl;
        // }
        
     
        for(int i=0;i<pos.size();++i){
            arr[i] = pos[i];
        }
        
        for(int i=pos.size();i<(pos.size() + neg.size());++i){
            arr[i] = neg[flag_neg];
            flag_neg += 1;
        }
        // Your code goes here
    }
};
