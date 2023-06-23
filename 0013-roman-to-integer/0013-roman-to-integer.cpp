class Solution {
public:
    int romanToInt(string s) {
        
  unordered_map<char, int> m;
        int n= s.length();
        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;
     
        
      int  ans=m[s[n-1]];
        for(int i=n-2;i>=0;i--){

if(m[s[i]]<m[s[i+1]]){
ans-=m[s[i]];
        }
        else{
            ans+=m[s[i]];
        }}
return ans;
    }
};