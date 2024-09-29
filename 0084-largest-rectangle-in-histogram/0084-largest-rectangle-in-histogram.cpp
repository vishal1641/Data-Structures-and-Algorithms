class Solution {
public:
    int largestRectangleArea(vector<int>& nums) {
        vector<int>v;
        vector<int>b;
        stack<int>s;
        for(int i=nums.size()-1;i>=0;i--){
            while(!s.empty()&&nums[s.top()]>=nums[i])
            s.pop();
            if(s.size()==0)
            v.push_back(nums.size());
            else {
                v.push_back(s.top());
            }
            s.push(i);
        }
        reverse(begin(v),end(v));
        stack<int>x;
        
        for(int i=0;i<nums.size();i++){
            while(!x.empty()&&nums[x.top()]>=nums[i])
            x.pop();
            if(x.size()==0)
            b.push_back(-1);
            else
            b.push_back(x.top());
            x.push(i);
        }
        int maxi=INT_MIN;
        for(int i=0;i<v.size();i++){
            maxi=max((v[i]-b[i]-1)*nums[i],maxi);
        }
        return maxi;
    }
};