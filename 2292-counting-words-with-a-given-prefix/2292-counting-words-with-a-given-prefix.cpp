class Solution {
public:
    int prefixCount(vector<string>& wor, string prefixx) {
        int cntr=0;
        for(int i=0;i<wor.size();i++){
            if(wor[i].substr(0,prefixx.length())==prefixx){
                cntr++;
            }
        }
        return cntr;
    }
};