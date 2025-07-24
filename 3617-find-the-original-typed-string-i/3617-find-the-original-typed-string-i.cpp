class Solution {
public:
    int possibleStringCount(string word) {
        int count=1;
        for(int i=word.size()-1;i>0;i--){
            if(word[i]==word[i-1])
            count++;
        }
        return count;
    }
};