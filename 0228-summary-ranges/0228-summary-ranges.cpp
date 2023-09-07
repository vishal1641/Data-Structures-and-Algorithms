class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<pair<int,int>>v;
        int c=0;
        for(int i=0;i<nums.size();i++){
            if(find(nums.begin(),nums.end(),(long)nums[i]+1)!=nums.end())
            c++;
            else{
                v.push_back({nums[i-c],nums[i]});
                
                c=0;
                
            }
        }
        vector<string>k;
        for(int i=0;i<v.size();i++){
            if(v[i].first==v[i].second){
            int w=v[i].first;
            k.push_back(to_string(w));}
            else
            {
                int p=v[i].first;
                int z=v[i].second;
                k.push_back(to_string(p)+"->"+to_string(z));            }

        }
        return k;
    }
};