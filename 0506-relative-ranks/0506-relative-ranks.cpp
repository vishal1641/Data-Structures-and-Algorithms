class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
      vector<int>s=score;
      sort(score.begin(),score.end(),greater<int>())  ;
      vector<string>g(score.size());
      for(int i=0;i<score.size();i++){
          int a=find(s.begin(),s.end(),score[i])-s.begin();
          if(i==0){
          g[a]="Gold Medal";
          }
           else if(i==1){
          g[a]="Silver Medal";
          }
           else if(i==2){
          g[a]="Bronze Medal";
          }
          else
          g[a]=to_string(i+1);

        
      }
      return g;
    }
};