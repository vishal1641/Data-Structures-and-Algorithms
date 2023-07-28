class Solution {
public:
    void duplicateZeros(vector<int>& nums) {
        vector<int>y=nums;
        if(count(nums.begin(),nums.end(),0)!=nums.size())
{
    vector<int>v;
   
    for(int i=0;i<nums.size();i++)
    {

        if(nums[i]!=0)
        {
  v.push_back(nums[i]);
  }
        else
        {
            v.push_back(0);
           
            v.push_back(0);
            nums.pop_back();

        }
      
       
    }
    if(v.size()-1==y.size())
    v.pop_back();
   
    nums=v;}
    }
};
