class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int i=0;
        int j=0;
        int n=nums1.size();
        int m=nums2.size();
        sort(begin(nums1),end(nums1));
        sort(begin(nums2),end(nums2));
        vector<int>v;
        while(i<n&&j<m){
            if(nums1[i]<nums2[j])
            {
                i++;
            }
            else if(nums2[j]<nums1[i])
            j++;
            else 
            {
                if(v.size()==0||nums1[i]!=v.back())
                v.push_back(nums1[i]);
                i++;j++;
            }
        }
        return v;
    }
};