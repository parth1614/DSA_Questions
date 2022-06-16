// Solution without using any sorting algorithm as asked in the sheet, and Time Complexity is Linear i.e. O(n)
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
        int count0 = 0;
        int count1 = 0;
        int count2 = 0;
        
        for(int i=0;i<n;++i){
            if(a[i]==0){
                count0 += 1;
            }
           else if(a[i]==1){
                count1 += 1;
            }
           else if(a[i]==2){
                count2 += 1;
            }
            else{
                
            }
        }
       // cout<<count0<<" ";
        int flag =0;
        int flag1 = 0;
        
        for(int i=0;i<count0;++i){
          
            a[i] = 0;
            flag += 1;
            
        }
        
        for(int i=flag;i<(flag + count1);++i){
          
            a[i] = 1;
            flag1 += 1;
            
        }
        flag1 += flag;
        
        for(int i=flag1;i<(flag1 + count2);++i){
          
            a[i] = 2;
           
            
        }
        
     
    }
};
