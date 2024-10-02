class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int, int> m;
        vector<int>a=arr;
        sort(begin(arr), end(arr));
        vector<int>ans;
        int c=0;
        for (int i = 0; i < arr.size(); i++) {
            if (m.find(arr[i]) == m.end())
                m[arr[i]] = i + 1-c;
            else{
                c++;
            }
        }
for(int i=0;i<a.size();i++){
    ans.push_back(m[a[i]]);
}
return ans;
    }
};