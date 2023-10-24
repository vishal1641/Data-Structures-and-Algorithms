class Solution {
public:
    bool isPalindrome(int x)
     {
      
        long long 
      rem=0,rev=0;
       if(x<0)
       return false;
        for(int i=x;i>0;i=i/10)
        {
             rem=i%10;
             rev=rev*10+rem;
        }
        
        return rev==x;
        

       
      

    }
};