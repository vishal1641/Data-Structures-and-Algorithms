class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        map<int,int>m;
        int c=0;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;}
            
       for(int i=0;i<nums.size();i++){
        map<int,int>m1;
           for(int j=i;j<nums.size();j++){
               m1[nums[j]]++;
               if(m1.size()==m.size())
               c++;
           }
       }

         
     return c;  
    }
};