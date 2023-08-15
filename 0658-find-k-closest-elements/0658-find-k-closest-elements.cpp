class Solution {
public:
    vector<int> findClosestElements(vector<int>& nums, int k, int x) {
       priority_queue<pair<int,int>>m;
       for(int i=0;i<nums.size();i++){
m.push({abs(nums[i]-x),nums[i]});
if(m.size()>k)
m.pop();
       } 
       vector<int>v;
       while(m.size()>0){
v.push_back(m.top().second);
m.pop();

       }
     sort(v.begin(),v.end());
     return v;
    }
};