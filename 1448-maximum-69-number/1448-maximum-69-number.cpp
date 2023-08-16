class Solution {
public:
    int maximum69Number (int num) {
        string s;
        int rem=0;
        int c=0;
        string k=to_string(num);
       for(int i=0;i<k.size();i++)
       {
          
           if(k[i]=='6'&&c==0){
           s+='9';c++;}
           else
           {
           s+=k[i];}
       }
       return stoi(s);
    }
};