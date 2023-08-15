class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        priority_queue<int,vector<int>,greater<int>>m;
        for(int i=0;i<nums.size();i++){
            m.push(nums[i]);
        }
        vector<int>v;
        while(m.size()>0){
            v.push_back(m.top());
            m.pop();
        }
        return v;

    }
};