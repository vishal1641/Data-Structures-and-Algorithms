class Solution {
public:
    int totalSteps(vector<int>& nums) {
        stack<pair<int,int>>s;
        int ans=-1;
        for(int i=nums.size()-1;i>=0;i--){
            int c=0;
            while(!s.empty()&&s.top().first<nums[i]){
                c++;
                c=max(c,s.top().second);
                s.pop();
            }
            s.push({nums[i],c});
            ans=max(c,ans);
        }
        return ans;
    }
};