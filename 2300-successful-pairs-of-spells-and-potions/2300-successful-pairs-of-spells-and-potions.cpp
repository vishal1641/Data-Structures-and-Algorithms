class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(begin(potions),end(potions));
        vector<int>ans;
        for(int i=0;i<spells.size();i++){
            int l=0;int r=potions.size()-1;
            int result=0;
            while(l<=r){
                int mid=l+(r-l)/2;
                if(1LL*spells[i]*potions[mid]>=success){
                    result=potions.size()-mid;
                    r=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
            ans.push_back(result);
        }
        return ans;
    }
};