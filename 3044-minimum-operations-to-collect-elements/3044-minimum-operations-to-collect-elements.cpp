class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
       vector<int>v(k+1,0);
       int w=0;
       int h=0;
    
       for(int i=nums.size()-1;i>=0;i--)
       {
           if(nums[i]<=k){
               if(v[nums[i]]==0){
                   v[nums[i]]=1;
                   w++;
               }
           }
           h++;
           if(w==k)
           break;
       }
       return h;
    }
};