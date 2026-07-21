class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n = hand.size();
        int x = n / groupSize;
        if (n % groupSize != 0)
            return false;
        map<int, int> m;
        for (int i = 0; i < hand.size(); i++) {
            m[hand[i]]++;
        }
        while (m.size() > 0) {
            int a = m.begin()->first;
            for (int i = a; i < a + groupSize; i++) {
                if (m.find(i) != m.end()) {
                    m[i]--;
                    if (m[i] == 0)
                        m.erase(i);
                }
                else return false;
            }
        }
        return true;
    }
};