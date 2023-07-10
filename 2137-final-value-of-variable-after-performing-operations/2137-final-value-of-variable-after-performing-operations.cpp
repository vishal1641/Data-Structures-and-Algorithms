class Solution {
public:
    int finalValueAfterOperations(vector<string>& ope) {
        int x=0;
        for(int i=0;i<ope.size();i++){
         
            if(ope[i][1]=='+')
            x++;
            else
x--;
        }
        return x;
    }
};