class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int i=0,j=0,count=0;
        string s=to_string(num);
        int n=s.size();
        string p="";
        while(j<n){
p+=s[j];
            if(j-i+1<k){
j++;
            }
else if(j-i+1==k)
{
    int m=stoi(p);
    if(m!=0&&num%m==0)
    count++;
    p.erase(p.begin());
    i++;j++;

}
        }
        return count;
    }
};