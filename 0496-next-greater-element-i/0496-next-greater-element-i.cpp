class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
       for(int i=0;i<nums1.size();i++)
       {
           int x=find(nums2.begin(),nums2.end(),nums1[i])-nums2.begin();
           int z=0;
           for(int j=x+1;j<nums2.size();j++)
           {
               if(nums2[j]>nums1[i])
               {
                   v.push_back(nums2[j]);
                   z++;
                   break;
               }
            }
               if(z==0){
               v.push_back(-1);}
           
       } 
       return v;
    }
};