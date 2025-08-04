class Solution {
public:
bool dfs(int i,vector<vector<int>>&graph,vector<int>&v,vector<int>&pr,vector<int>&safe){
    v[i]=1;
    pr[i]=1;
    for(auto it :graph[i]){
        if(v[it]==0){
            if(dfs(it,graph,v,pr,safe)==true){
                safe[i]=0;
                return true;
            }
        }
        if(pr[it]==1){
            safe[i]=0;
            return true;
        }
    }
    safe[i]=1;
    pr[i]=0;
    return false;
}
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>v(n,0);
        vector<int>pr(n,0);
        vector<vector<int>>ad;
       vector<int>safe(n,0);
        for(int i=0;i<n;i++){
            if(v[i]==0){
                dfs(i,graph,v,pr,safe);
            }
        }
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(safe[i]==1)
            ans.push_back(i);
        }
        return ans;

    }
};