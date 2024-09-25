class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
        return 0;
        unordered_set<int>s(begin(nums),end(nums));
        int maxi=INT_MIN;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(s.find(nums[i]-1)==s.end()){
                int x=nums[i];
                 count=1;
                while(s.find(x+1)!=s.end()){
                    count++;
                    x=x+1;
                }
               
            }
            maxi=max(maxi,count);
        }
        return count;
    }
};