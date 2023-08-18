class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& nums) {
        int c=0;
        set<char>k(allowed.begin(),allowed.end());
       int ans=nums.size();
        for(auto it:nums){
            for(int i=0;i<it.length();i++){
                if(k.find(it[i])==k.end()){

                ans--;
                break;
                }
            }
           

        }
        return ans;
    }
};