class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        int n = s.size();
        int i = 0, j= 0;
        vector<vector<int>> ans;
        while(j<n){
            int cnt = 0;
            char temp = s[i];
            while(s[j] == s[i]){
                cnt++;
                j++;
            }
            if(cnt>=3){
                ans.push_back({i, j-1});
            }
            i=j;
        }
        return ans;
    }
};