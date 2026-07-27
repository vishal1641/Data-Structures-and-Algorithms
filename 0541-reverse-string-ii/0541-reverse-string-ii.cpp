class Solution {
public:
    string reverseStr(string s, int k) {
       int n=s.size()/(2*k);
       int rem=s.size()%(2*k);
       int i=0;
       for(i=0;i<n*2*k;i+=2*k){
       reverse(s.begin()+i,s.begin()+i+k);
       }
       if(rem<=k)
       reverse(s.begin()+i,s.end());
       if(rem>k&&rem<2*k)
       reverse(s.begin()+i,s.begin()+i+k);
       return s;

    }
};