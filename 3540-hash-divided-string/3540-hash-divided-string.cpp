class Solution {
public:
    string stringHash(string s, int k) {
        string z = "";

        for (int i = 0; i < s.size(); i = i + k) {
            int sum = 0;
            for (int j = i; j < i + k && j < s.size(); j++) {
                int a = s[j] - 'a';
                sum += a;
            }

           int c = (sum) % 26;
            char x = 'a' + c;

            z.push_back(x);
        }
    
    return z;
}
}
;