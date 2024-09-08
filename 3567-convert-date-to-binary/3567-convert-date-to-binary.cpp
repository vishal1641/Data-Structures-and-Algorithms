class Solution {
public:
    string convert(int a) {
        string binary = "";
        while (a > 0) {
            binary = (a % 2 == 0 ? '0' : '1') + binary;
            a /= 2;
        }
        return binary;
    }
    string convertDateToBinary(string date) {
        int a = stoi(date.substr(0, 4));
        int b = stoi(date.substr(5, 2));
        int c = stoi(date.substr(8, 2));

        string d = convert(a);
        string e = convert(b);
        string f = convert(c);
        string ans = d + '-' + e + '-' + f;
        return ans;
    }
};