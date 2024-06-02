class Solution {
public:
    string minWindow(string s, string t) {
       unordered_map<char,int>m;
        int mini=INT_MAX;
        for(auto it :t){
m[it]++;
        }
        int count=m.size();
        int i=0,j=0;
        int start=0;
        while(j<s.size())
        {
            if(m.find(s[j])!=m.end())
            {
                m[s[j]]--;
                if(m[s[j]]==0)
                count--;
            }
            if(count==0)
            {

            
            while(count==0)
            {
             

                    
                    if(j-i+1<mini)
                    {
                        mini=j-i+1;
                        start=i;
                    }
                
                if(m.find(s[i])!=m.end())
                {
                    m[s[i]]++;
                    if(m[s[i]]>0)
                    count++;
                }
                i++;
            }}
            j++;
        }
        if(mini==INT_MAX)
        return "";
        return s.substr(start,mini);
    }
};