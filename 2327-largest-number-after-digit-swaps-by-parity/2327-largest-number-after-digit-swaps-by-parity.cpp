class Solution {
public:
    int largestInteger(int nums) {
      priority_queue<int>odd,even;
      vector<int>d;
      int rem=0;
      for(int i=nums;i>0;i=i/10)
      {
          rem=i%10;
          d.push_back(rem);
          if(rem%2==0)
          even.push(rem);
          else odd.push(rem);
      } 
      vector<int>res;
      for(int i=d.size()-1;i>=0;i--)
      {
          if(d[i]%2==0)
          {
          res.push_back(even.top());
          even.pop();
          }
          else
          {
              res.push_back(odd.top());
              odd.pop();
          }
      }
      int chu=0;
      for(int i=0;i<res.size();i++)
      {
          chu=chu*10+res[i];
      }
return chu;
    }
};