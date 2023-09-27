class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
       
      sort(s1.begin(),s1.end());
      sort(s2.begin(),s2.end(),greater<char>());
      int c=0,p=0;
      for(int i=0;i<s1.size();i++){
          if(s2[i]<s1[s1.size()-i-1]){
              c++;
          break;
          }
      } 
      sort(s1.begin(),s1.end(),greater<char>());
      sort(s2.begin(),s2.end());
       for(int i=0;i<s1.size();i++){
          if(s1[i]<s2[s2.size()-i-1]){
              p++;
          break;
          }
      } 
       if(c==0||p==0)
       return true;
       return false;

    }
};