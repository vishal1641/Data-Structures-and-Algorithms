class Solution {
public:
    int minimumLength(string s) {
        int i=0,j=s.size()-1;
        while(i<j){
            if(s[i]==s[j])
            {
                while(i<j&&s[i]==s[i+1])
                i++;
                while(i<j&&s[j]==s[j-1])
                j--;
            }
            else
            break;
            i++;j--;
        }
        if(j>=i)
        return j-i+1;
        else
        return 0;
    }
};