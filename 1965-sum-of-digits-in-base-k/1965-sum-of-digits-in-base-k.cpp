class Solution {
public:
    int sumBase(int n, int k) {
     int num=0;
     for(int i=n;i>0;i=i/k){
         num+=i%k;
     }  
     return num;
    }
};