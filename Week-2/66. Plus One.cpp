class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
     
        int n= digits.size(),i=-10;
     if(digits[n-1]!=9)
        {
            int j=digits[n-1];
            j++;
            digits[n-1]=j;
           
        }
        else
        {
           // digits.push_back(0);
            
         // if(n>1)
            for( i=n-1;i>=0;i--)
            {
                if(digits[i]==9)
                    digits[i]=0;
                else
                {
                    int j = digits[i];
                    j++;
                    digits[i]=j;
                    break;
                    
                }
            }
            
        }
    //    cout<<i<<endl;
        if(digits[0]==0)
        {
             digits[0]=1;
            digits.push_back(0);
        } 
        
        
         return digits;
        
    }
};