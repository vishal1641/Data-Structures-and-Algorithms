class Solution {
public:
    bool isValid(string s) {
        stack<char>ii;
        for(int i=0;i<s.length();i++){
            if(s[i]=='['||s[i]=='{'||s[i]=='(')
            ii.push(s[i]);
            else
            {
                if(!ii.empty()){
                    char top=ii.top();
                    if(s[i]=='}'&&top=='{'||s[i]==']'&&top=='['||s[i]==')'&&top=='(')
                    ii.pop();
                    else
                    return 0;
                }
                else
                return 0;
            }
        }
        if(ii.empty())
        return 1;
        return 0;
    }
};