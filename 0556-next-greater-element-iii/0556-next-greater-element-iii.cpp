class Solution {
public:
    int nextGreaterElement(int n) {
    string k=to_string(n);
    string temp=k;
        next_permutation(temp.begin(),temp.end());
      auto res=stoll(temp);     
      if(res>INT_MAX||res<=n)   return -1;
      return res;
    }
};