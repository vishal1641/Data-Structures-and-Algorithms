class Solution {
public:
    int lengthOfLastWord(string s) {
        int w=0;
        int n=s.length();
       for(int i=n-1;i>=0;i-- ){
          
          if(s[i]!=' ')
          w++;
          if(s[i]==' '&&s[i+1]!=' '&&i!=n-1)
           break;
       } 
      return w;
    }
};