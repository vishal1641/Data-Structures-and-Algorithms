class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
      int i=0,j=0;
      int n=s.length(),n1=p.length();
      unordered_map<char,int>m;
      for(int i=0;i<n1;i++){
m[p[i]]++;

      }  
      vector<int>v;
     int  count=m.size();
      while(j<n){
          if(m.find(s[j])!=m.end()){
m[s[j]]--;
if(m[s[j]]==0)
count--;}

          if(j-i+1<n1){
              j++;
          }
          else if(j-i+1==n1){
if(count ==0)
v.push_back(i);

if(m.find(s[i])!=m.end()){
m[s[i]]++;
if(m[s[i]]==1)
count++;}
j++;
i++;
          }
      }
      return v;
    }
};