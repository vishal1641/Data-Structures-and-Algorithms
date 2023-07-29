class Solution {
public:
    bool isSubsequence(string s, string t) {
        int k=0,w=0;
       while(k<s.length()&&w<t.length()){
           if(s[k]==t[w]){

           
           k++;
           w++;}
           else
           w++;
       }
           
        
        return k==s.length();
    }
};