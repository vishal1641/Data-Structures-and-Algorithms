class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if (digits[digits.size()-1] < 9) {
            digits[digits.size()-1] = digits[digits.size()-1] + 1;
            return digits;
        } else {
            for (int i = digits.size() - 1; i >= 0; i--) {
                if (digits[i] == 9)
                    digits[i] = 0;
                else{
                    digits[i] = digits[i] + 1;
                    break;}
            }
        }
        vector<int> v;

        if (digits[0] == 0) {
            v.push_back(1);
            for (int i = 0; i < digits.size(); i++)
                v.push_back(digits[i]);
                return v;
        }
        return digits;
    }
};