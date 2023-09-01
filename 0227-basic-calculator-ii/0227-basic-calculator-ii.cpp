class Solution {
public:
    int calculate(string s) {
        stack<int>st;
      char  sign='+';
       int c=0;
        for(int i=0;i<s.length();i++)
        {
            if(isdigit(s[i]))
            c=c*10+(s[i]-'0');
            if(!isdigit(s[i])&&s[i]!=' '||i==s.size()-1)
            {
                if(sign=='+')
                st.push(c);
                else if(sign=='-')
                st.push(-1*c);
                else{
                    if(sign=='*'){
                        int num=st.top();
                        st.pop();
                    st.push(num*c);}
                    else{
                    int num=st.top();
                        st.pop();
                    st.push(num/c);}
                }
                sign=s[i];
                c=0;
            }
        }
        int sum=0;
        while(!st.empty()){
            sum+=st.top();st.pop();
        }
        return sum;
    }
};