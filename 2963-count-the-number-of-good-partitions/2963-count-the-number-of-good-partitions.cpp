
class Solution {
public:
int M=1e9+7;
    int numberOfGoodPartitions(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]=i;
        }
        int i=0,j=0;
         j=max(j,m[nums[0]]);
        int result=1;
        while(i<nums.size()){
if(i>j){
    result=(result*2)%M;
}
j=max(j,m[nums[i]]);
i++;
        }
        return result;
    }
};