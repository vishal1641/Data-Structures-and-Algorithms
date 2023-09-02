class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int>st;
        st.push(-1);
        int c=0;
        int maxi=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(')
            st.push(i);
            else{
                    st.pop();
                    if(st.empty())
st.push(i);
                
                else{
                    maxi=max(i-st.top(),maxi);
                   
                }
            }
        }
    
        return maxi;
    }
};