#include <algorithm> // for std::rotate

class Solution {
public:
    bool rotateString(string s, string goal) {
        int m = 0;
        while (m < s.size()) {
           
          rotate(goal.rbegin(), goal.rbegin() + 1, goal.rend());
            m++;
            if (goal == s)
                return true;
        }
        return false;
    }
};
