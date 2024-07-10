class Solution {
public:
    int minOperations(vector<string>& logs) {
       vector<string>s;
        for(int i=0;i<logs.size();i++){
            if(logs[i][0]!='.')
            s.push_back(logs[i]);
            else if(logs[i][0]=='.'&&logs[i][1]=='/')
            continue;
            else{
                if(s.size()!=0)
            s.pop_back();}
        }
        return s.size();
    }
};