// class Solution {
// public:
//     bool detectCapitalUse(string word) {
//         int k=0,c=0;
//         for(int i=0;i<word.length();i++)
//         {
//             if(isupper(word[i]))
//             {
// k++;
//             }
//             if(islower(word[i]))
//             c++;

//         }
//         if(k==1&&c==(word.length()-1))
//         return true;
//         if(k==word.length())
//         return true;
//         if(c==word.length())
//         return true;
//         else
//         return false;
//     }
// };
class Solution {
public:
    bool detectCapitalUse(string word) {
        int cnt = 0;
        bool f = false;
        for(int i=0; i<word.size(); i++) {
            if(word[i] >= 65 && word[i] <= 90) {
                if(i == 0) f = true;
                else f = false;
                cnt++;
            }
        }

        if((cnt == 1 && f)|| cnt == 0 || cnt == word.size()) return true;
        else return false;
    }
};