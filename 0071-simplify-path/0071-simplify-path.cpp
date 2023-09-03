class Solution {
public:
    string simplifyPath(string p) {
        stack<string>st;
        for(int i=0;i<p.size();i++)
        {
        string w="";
            if(p[i]=='/')
            {
            continue;

            }
            while(i<p.size()&&p[i]!='/')
            {
            w+=p[i];
i++;
            }
           
            if(w=="..")
            {
                if(!st.empty())
                st.pop();
                
            }
            else if(w==".")
            {
                continue;
            }
            else{
            st.push(w);w="";}
        }
        string ans=""
;        while(!st.empty()){
            ans="/"+st.top()+ans;
            st.pop();
        }
        return ans.size()>0?ans:"/";
    }
};