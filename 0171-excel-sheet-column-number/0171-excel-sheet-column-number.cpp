class Solution {
public:
    int titleToNumber(string c) {
        if(c.length()==1)
        return c[0]-'A'+1;
        int w=0;
        int dum=0;
        for(int i=0;i<c.length();i++){
           

            
              w=(c[i]-'A'+1);
               dum=dum*26+w;}
        

        return dum;
    }
};