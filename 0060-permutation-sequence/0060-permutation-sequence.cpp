class Solution {
public:
    string getPermutation(int n, int k) {
        int fact = 1;
        vector<int> r;
        for (int i = 1; i < n; i++) {
            fact = fact * i;
            r.push_back(i);
        }
        r.push_back(n);
        string ans = "";
        k = k - 1;
        while (true) {
            ans = ans + to_string(r[k / fact]);
            r.erase(r.begin() + k / fact);
            if (r.size() == 0)
                break;
            k = k % fact;
            fact = fact / r.size();
        }
        return ans;
    }
};