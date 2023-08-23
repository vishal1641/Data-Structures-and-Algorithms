class Solution {
public:
    vector<int> diStringMatch(string s) {
      int  a=0,b=s.length();
      vector<int>v;
      
        for(int i=0;i<s.size();i++){
           if(s[i]=='I'){
           v.push_back(a);
           a++;}
           else{
           v.push_back(b) ;
           
           b--;}
        }
        int sum=accumulate(v.begin(),v.end(),0);
        v.push_back((s.length()*(s.length()+1))/2-sum);
        return v;

    }
};