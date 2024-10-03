class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>s;
        for(int i=0;i<nums.size();i++){
            s.push(nums[i]);
        }
        int n=nums.size()-k;
        while(n>0){
            s.pop();
            n--;
        }
        return s.top();
    }
};