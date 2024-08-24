class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int, int> m;
        for (int i = 0; i < arr1.size(); i++)
            m[arr1[i]]++;
        vector<int> v;
        for (int i = 0; i < arr2.size(); i++) {
            if (m.find(arr2[i]) != m.end())
                for (int j = 0; j < m[arr2[i]]; j++)
                    v.push_back(arr2[i]);
        }
        vector<int> ans;
        for (int i = 0; i < arr1.size(); i++) {

            if (find(arr2.begin(), arr2.end(), arr1[i]) == arr2.end())
                ans.push_back(arr1[i]);
        }
        sort(begin(ans),end(ans));
        v.insert(v.end(), ans.begin(), ans.end());
        return v;
    }
};