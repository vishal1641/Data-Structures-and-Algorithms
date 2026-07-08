class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s(nums.begin(),nums.end());
        int count=0;
        int maxi=INT_MIN;

        for(int i=0;i<nums.size();i++){
            if(s.find(nums[i]-1)!=s.end()){
                int a=nums[i];
                count=1;
                while(s.find(a+1)!=s.end()){
                    count++;
                    a++;
                }
                maxi=max(maxi,count);
            }
        }

    return maxi+1;
    }
};