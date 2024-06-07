class Solution
{
    public:
        struct Comp
        {
            bool operator()(const pair<char, int> &a, const pair<char, int> &b)
            {
                if (a.first != b.first)
                {
                    return a.first > b.first;
                }
                return a.second < b.second;
            }
        };
    string clearStars(string s)
    {
        priority_queue<pair<char,int>, vector<pair<char, int>>, Comp> p;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != '*')
            {
                p.push({ s[i],
                    i });
            }
            else
            {
                auto a = p.top();
                p.pop();
                int x = a.second;
                s[x] = '*';
            }
        }
        string k = "";
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != '*')
                k += s[i];
        }
        return k;
    }
};