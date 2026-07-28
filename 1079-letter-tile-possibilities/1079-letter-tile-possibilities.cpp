class Solution {
public:
    set<string> st;

    void permute(string &s, int i) {

        if (i == s.size()) {
            if (!s.empty())
                st.insert(s);
            return;
        }

        for (int j = i; j < s.size(); j++) {
            swap(s[i], s[j]);
            permute(s, i + 1);
            swap(s[i], s[j]);
        }
    }

    void subset(string &tiles, int i, string &temp) {

        if (i == tiles.size()) {
            string t = temp;
            permute(t, 0);
            return;
        }

        
        temp.push_back(tiles[i]);
        subset(tiles, i + 1, temp);
        temp.pop_back();

       
        subset(tiles, i + 1, temp);
    }

    int numTilePossibilities(string tiles) {

        string temp = "";
        subset(tiles, 0, temp);

        return st.size();
    }
};