class Solution {
public:
    string reorganizeString(string s) {
        map<char, int> m;
        for (int i = 0; i < s.size(); i++)
            m[s[i]]++;

        vector<pair<int, char>> v;
        for (auto it : m)
            v.push_back({it.second, it.first});
        
        // Sort the vector based on character frequencies in descending order
        sort(v.begin(), v.end(), greater<pair<int, char>>());

        // Check if the reorganization is possible
        if (v[0].first > (s.size() + 1) / 2) {
            return ""; // If the most frequent character's count is more than (n + 1) / 2
        }

        string m1(s.size(), ' '); // Initialize result string with spaces
        int index = 0;

        // Place characters in the string
        for (auto it : v) {
            while (it.first > 0) {
                // Place character at the current index
                if (index >= s.size()) {
                    index = 1; // Switch to odd indices once we reach the end
                }
                m1[index] = it.second;
                it.first--;
                index += 2; 
            }
        }

        return m1;
    }
};
