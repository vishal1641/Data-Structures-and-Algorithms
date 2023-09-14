class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int k=0;
        for(int i=0;i<stones.size();i++){
            if(find(jewels.begin(),jewels.end(),stones[i])!=jewels.end())
            k++;
        }
        return k;
    }
};