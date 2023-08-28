class Solution {
public:
    long long minimumPossibleSum(int n, int target) {
        map<int,int>m;
long long sum=0;
        for(int i=1;m.size()!=n;i++){
            
if(m.find(target-i)==m.end()){

m[i]++;
sum+=i;}

        }
      
        return sum;
    }
};