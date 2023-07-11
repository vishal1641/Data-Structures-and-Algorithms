class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        set<int>s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        if(s.size()==1||s.size()==2)
        return -1;
        int k=0;
        int p;
        for(auto it:s){
if(k!=0){
p= it;
break;
}
else k++;
        }
        return p;
    }
};