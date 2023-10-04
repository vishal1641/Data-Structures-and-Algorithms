class Solution {
public:
    string reorderSpaces(string text) {
        int counts = 0,countw = 0;
        string result = "";
        vector<string> mesg;
        for(int i=0;i<text.size();i++)
        {
            string word = "";
            while(text[i]!=' ' && i!=text.size())
            {
                word += text[i];
                i++;
            }
        if(word.size()!=0)
            {countw++;
        mesg.push_back(word);
        }
        if(text[i]==' ')
            counts++;
        }
        int space = 0, lastspace = 0;
        if(countw==1){
            lastspace = counts;
        }
        else{
        space = counts/(countw-1);
        lastspace = counts%(countw-1);}
        for(int x= 0;x<mesg.size();x++)
        {
            result += mesg[x];
            if(x!=mesg.size()-1){
                result += string(space,' ');
            }
        }
        
        result = result +  string(lastspace, ' ');
        return result;
    }
};