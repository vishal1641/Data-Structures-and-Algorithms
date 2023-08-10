class Solution {
public:
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
     vector<int>ans;
     map<int,int>m;
     int i=0,j=0;
     for(;j<nums.size();j++)
     {
         m[nums[j]]++;
        
         if(j-i+1>k)
         { m[nums[i]]--;
             i++;
           
         }
         if(j-i+1==k){
             int c=0;
             for(auto it:m)
             {
                 c+=it.second;
                 if(c>=x){
                     if(it.first>0)
                     ans.push_back(0);
                     else
                     ans.push_back(it.first);
                     break;
                 }
             }
         }
     } 
     return ans;  
    }
};