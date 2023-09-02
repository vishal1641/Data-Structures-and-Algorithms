class Solution {
public:
    long long maxSum(vector<int>& nums, int m, int k) {
       unordered_map<long long,long long>mt;
        int i=0,j=0;
        long long sum=0;
    long long maxi=0;
        while(j<nums.size())
        {
            mt[nums[j]]++;
            sum+=nums[j];
            if(j-i+1<k)
                j++;
            else if(j-i+1==k)
            {
                if(mt.size()>=m){
                maxi=max(sum,maxi);}
                sum=sum-nums[i];
                mt[nums[i]]--;
                if(mt[nums[i]]==0)
                    mt.erase(nums[i]);
                i++;
                j++;
            }
                
        }
        return maxi;
    }
};