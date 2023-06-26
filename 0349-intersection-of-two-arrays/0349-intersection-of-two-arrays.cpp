class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        int i=0;
       
        unordered_map<int,int>m;
for(;i<nums1.size();i++){
m[nums1[i]]++;
}
for(int i=0;i<nums2.size();i++){
    if(m[nums2[i]]>=1)
    {
        v.push_back(nums2[i]);
        m[nums2[i]]=0;
    }
}
return v;
    }
};