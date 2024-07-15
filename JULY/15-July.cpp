#include<string.h>
class Solution {
  public:
    string smallestNumber(int s, int d) {
        // code here
        if((d*9) < s )
            return "-1";
        string nums(d,'0');
        
    //put 9th first from the last portion of the string
    
        for(int i=d-1;i>=0;i--)
        {
           
           if(s >9){
               
            nums[i]='9';
            s-=9; //update the sum
           }
           else
           {
               nums[i]='0'+ s ;
               s=0;
           }
        }
        if(nums[0]=='0') //if first digit is zero we change it to 0 to 1
        
        {
            nums[0]= '1';
            for(int i=1;i<d;i++) 
            {
                if(nums[i]>'0'){
                nums[i]--;
                break;
                }
            }
        }
        return nums;
    }
}