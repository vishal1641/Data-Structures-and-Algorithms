class Solution {
public:
    int largestRectangleArea(vector<int>& nums) {
        vector<int>v(nums.size());
        stack<pair<int,int>>s;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            
            while(!s.empty()&&s.top().first>=nums[i])
            s.pop();
            if(s.empty())
            v[i]=-1;
            else
            v[i]=s.top().second;
            s.push({nums[i],i});
        }
        s={};
        vector<int>r(nums.size());
        
        for(int i=nums.size()-1;i>=0;i--){
        
            while(!s.empty()&&s.top().first>=nums[i])
            s.pop();
            if(s.empty())
            r[i]=n;
            else
            r[i]=s.top().second;
            s.push({nums[i],i});
        }
        vector<int>w(n);
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
        w[i]=(nums[i]*(r[i]-v[i]-1));
            
            maxi=max(maxi,w[i]);
        }
        
        return maxi;
    }
};