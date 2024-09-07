class Solution {
public:
    int generateKey(int num1, int num2, int num3) {
        string a = to_string(num1);
        string b = to_string(num2);
        string c = to_string(num3);
        if (a.size() < 4)
            for (int i = a.size(); i < 4; i++) {
                a = '0' + a;
            }
        for (int i = b.size(); i < 4; i++) {
            b = '0' + b;
        }
        for (int i = c.size(); i <4 ; i++) {
            c = '0' + c;
        }
        int mini=INT_MAX;
        int rev=0;
        for (int i = 0; i < a.size(); i++) {
            mini = min({a[i] - '0', b[i] - '0', c[i] - '0'});
           rev=rev*10+mini;
        }
       
       
        return rev;
    }
};