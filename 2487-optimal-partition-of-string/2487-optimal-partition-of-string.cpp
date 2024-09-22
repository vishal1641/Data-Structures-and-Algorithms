class Solution {
public:
    int partitionString(string s) {
        int c=1;
        set<char>st;

        for(int i=0;i<s.size();i++){
            if(st.find(s[i])!=st.end()){
                c++;
                 st.clear();
            }
                st.insert(s[i]);
        }
        return c;
    }
};