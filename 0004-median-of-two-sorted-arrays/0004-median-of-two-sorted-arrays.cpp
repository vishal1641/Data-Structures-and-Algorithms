class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        for(auto num : nums1){
            v.push_back(num);
        }
        for(auto num : nums2){
            v.push_back(num);
        }
        sort(v.begin(),v.end());

        int n = v.size();
        if(n%2==1){
            int a = n/2;
            return v[a];
        }
        else{
            int b = n/2;
            double k = (v[b-1] + v[b]);
            return (k/2);
        }
    }
};