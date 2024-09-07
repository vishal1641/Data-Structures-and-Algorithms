class Solution {
public:
    bool checkTwoChessboards(string a, string b) {

        if ((((a[0] - 'a') + (a[1] - '0')) % 2 == 0 &&
                ((b[0] - 'a') + (b[1] - '0')) % 2 == 0 )||(
            ((a[0] - 'a') + (a[1] - '0')) % 2 != 0 &&
                ((b[0] - 'a') + (b[1] - '0')) % 2 != 0))
            return true;
        return false;
    }
};