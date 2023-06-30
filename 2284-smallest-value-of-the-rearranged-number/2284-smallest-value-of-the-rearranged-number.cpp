class Solution {
public:
    long long smallestNumber(long long num) {
      
        string s=to_string(abs(num));
        long long w=0;
        if(num==0)
        return 0;
        if(num>0){

        sort(s.begin(),s.end());
          int index= s.find_first_not_of('0');
    swap(s[0],s[index]);
        w=stoll(s);
        
        }
         else{

        sort(s.begin(),s.end(),greater<char>());
        
        w=stoll(s);
      
        }  
          return (num<0)?w*-1: w;
    }
};