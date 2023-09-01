class Solution {
public:
    int calculate(string s) {
        stack<int>st;
        int sign=1;
        int sum=0;
int c=0;
      for(int i=0;i<s.length();i++){
          if(s[i]>='0'&&s[i]<='9'){
c=0;
              while(i<s.size()&&s[i]>='0'&&s[i]<='9'){
                  c=c*10+(s[i]-'0');
                  i++;
              }
              sum=sum+sign*c;
              i--;
          }
          else if(s[i]=='+'){
              sign=1;
          }
          else if(s[i]=='-')
          sign =-1;
          else if(s[i]=='(')
          {
              st.push(sum);
              st.push(sign);
              sum=0;sign=1;
          }
          else if(s[i]==')'){
              sum=sum*st.top();
              st.pop();
              sum+=st.top();
              st.pop();
              
              }
          }
          return sum;
      
    }
};