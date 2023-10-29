class Solution {
public:
void pick(int index,vector<int>&output,vector<vector<int>>&ans,vector<int>& candi,int target){

if(index==candi.size())
{
if(target==0)
{
ans.push_back(output);
return;
}
else return;
}
if(candi[index]<=target){
output.push_back(candi[index]);
pick(index,output,ans,candi,target-candi[index]);
output.pop_back();
}
pick(index+1,output,ans,candi,target);
}
    vector<vector<int>> combinationSum(vector<int>& candi, int target) {
        vector<int>output;
        vector<vector<int>>ans;
        int index=0;
        pick(index,output,ans,candi,target);
        return ans;
    }
};