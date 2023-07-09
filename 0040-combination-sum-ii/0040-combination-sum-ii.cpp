class Solution {
public:
     vector<vector<int>> ans;
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int> v;
        fun(candidates,target,0,v);
        return ans;
    }
    void fun(vector<int> &can,int t,int indx,vector<int> &arr)
    {
           if(t==0 ){
              ans.push_back(arr);
           return;
          }
          
          for(int i=indx;i<size(can);i++){
              if(i>indx && can[i]==can[i-1]) continue;
              if(t<can[i]) break;

              arr.push_back(can[i]);
              fun(can,t-can[i],i+1,arr);
              arr.pop_back();
          }
        }
      
};