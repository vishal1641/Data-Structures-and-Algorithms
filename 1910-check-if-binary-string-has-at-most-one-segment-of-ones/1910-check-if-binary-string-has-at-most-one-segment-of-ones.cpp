class Solution {
public:
    bool checkOnesSegment(string s) {
        int in=8894;
       for(int i=0;i<s.size();i++){
           if(s[i]=='0'){
           in=i;
           break;}
       }
       if(in==8894)
       return 1;
       for(int i=in;i<s.size();i++){
           if(s[i]=='1')
           return 0;}
           return 1;
    }
};