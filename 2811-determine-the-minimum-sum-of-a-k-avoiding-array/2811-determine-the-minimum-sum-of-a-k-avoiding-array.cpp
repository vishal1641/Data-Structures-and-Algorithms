class Solution {
public:
    int minimumSum(int n, int k) {
        map<int,int>m;
   
       vector<int>v;
       for(int i=1;i<=n;i++)
       {


if(m[k-i]==0&&m[i]==0)
{
    m[i]++;


    v.push_back(i);
}
else
n=n+1;}
// if(v.size()==n-1)
// {v.push_back(n+1);
// return accumulate(v.begin(),v.end(),0);}

       
       return accumulate(v.begin(),v.end(),0);
    }
};