class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
      map<int,int>m;
      int cum=0;
      for(int i=0;i<nums.size();i++){
          m[nums[i]]++;
      } 
      for(auto it:m){
          if(it.second==1)
          cum=cum+it.first;
      } 
      return cum;
    }
};