class Solution {
public:
    string replaceWords(vector<string>& w, string s) 
    {
         sort(w.begin(),w.end());
        vector<string> vec;
        string res="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=' ')res+=s[i];
            else
            {
                if(res!="")
                {
                    vec.push_back(res);
                    res="";
                }
            }
        }
        if(res!="")vec.push_back(res);
        for(int i=0;i<w.size();i++)
        {
            res=w[i];
            for(auto& x:vec)
            {
                if(x.substr(0,res.length())==res){x=res;}
            }
        }
        s="";
        for(int i=0;i<vec.size();i++)
        {
            s+=vec[i];
            if(i!=vec.size()-1)s+=" ";
        }
        return s;
    }
};