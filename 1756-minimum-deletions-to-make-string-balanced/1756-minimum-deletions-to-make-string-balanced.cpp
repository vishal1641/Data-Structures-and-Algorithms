class Solution {
public:
    int minimumDeletions(string s) {
        stack<char> stk;
        int res=0;
        for(int i=0;i<s.size();i++)
        {
            if(!stk.empty() && s[i]=='a')
            {
                stk.pop();
                res++;
            }
            if(s[i]=='b')
                stk.push(s[i]);
        }
        return res;
    }
};