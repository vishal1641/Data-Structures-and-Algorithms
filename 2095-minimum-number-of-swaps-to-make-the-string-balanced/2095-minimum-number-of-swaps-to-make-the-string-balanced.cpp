class Solution {
public:
    int minSwaps(string s) {
        int open=0;
        int unb=0;
        for(int i =0;i<s.size();i++){
            if(s[i]=='[')
            open++;
            else if (s[i]==']'&& open>0)
            open--;
            else {
                unb++;
            }
        }
       if(unb%2==0)
       return unb/2;
       return (unb+1)/2;
    }
};