class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int count = 1;
        string temp = a;
        while (temp.size() < b.size()) {
            temp = temp + a;
            count++;
        }
        if (temp.find(b) != -1)
            return count;
        count++;
        temp = temp + a;
        if (temp.find(b) != -1)
            return count;
        return -1;
    }
};