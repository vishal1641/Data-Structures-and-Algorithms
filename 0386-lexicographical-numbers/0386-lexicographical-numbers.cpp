class Solution {
public:
static bool comp(int a,int b){
    return to_string(a)<to_string(b);
}
    vector<int> lexicalOrder(int n) {
        vector<int>v;
        for(int i=1;i<=n;i++)
        v.push_back(i);
        sort(begin(v),end(v),comp);
        return v;
    }
};