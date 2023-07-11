class Solution {
public:
    int alternatingSubarray(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int maxi=0;
        for(int i=0;i<n-1;i++){
            int p=0;
            for(int j=i;j<n-1;j++){

            if(p%2==0&&nums[j+1]-nums[j]==1)
            {
count++;
            }
            else if(p%2!=0&&nums[j+1]-nums[j]==-1)
            count++;
            else 
            {
            break;

            }
            p++;
        }
        maxi=max(count,maxi);
        count=0;
            }
            if(maxi==0)
            return -1;
            else
            return maxi+1;
    }
};