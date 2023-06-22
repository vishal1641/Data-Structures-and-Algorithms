class Solution {
public:
  long long countBadPairs(vector<int>& a) {
    unordered_map<int,int> mp;
    long long n=a.size();
    long long pre=0,good=0;
    for(int i=0;i<a.size();i++)
        {
            pre=i-a[i];
            good+=mp[pre];
            mp[pre]++;
        }
        return (n*(n-1)/2)-good;
}
};