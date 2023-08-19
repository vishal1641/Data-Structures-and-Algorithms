class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>v;
        int w=0;
        for(int i=0;i<nums.size();i++){
if(nums[i]<pivot)
{
    v.push_back(nums[i]);
    
}
else if(nums[i]==pivot)
w++;

        }
        for(int i=0;i<w;i++){
            v.push_back(pivot);
        }
          for(int i=0;i<nums.size();i++){
if(nums[i]>pivot)
{
    v.push_back(nums[i]);
    
}
        }
        return v;
    }
};