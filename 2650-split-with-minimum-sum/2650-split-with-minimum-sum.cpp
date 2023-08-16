class Solution {
public:
    int splitNum(int nums) {
       
       int c=0;
       int ssum=0,sum=0;
       vector<int>v;
        for(int i=nums;i>0;i=i/10){
            v.push_back(i%10);
            c++;
        }
        sort(v.begin(),v.end());
        for(int i=0;i<c;i++){
       if(i%2==0)
       sum=sum*10+v[i];
       else ssum=ssum*10+v[i];
        }
return sum+ssum;
    }
};