class Solution {
public:
    bool bfs(int i, vector<int>& color, vector<vector<int>>& adj) {
        queue<int> q;
        q.push(i);
        color[i] = 0;
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            int cc = color[node];
            for (int j = 0; j < adj[node].size(); j++) {
                int ne=adj[node][j];
                if (color[ne] == -1) {
                    color[ne] = !cc;
                    q.push(adj[node][j]);
                } else if (color[ne] == cc)
                    return false;
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        int m = graph[0].size();
        vector<vector<int>> adj(n);
        vector<int> color(n, -1);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < graph[i].size(); j++) {
                adj[i].push_back(graph[i][j]);
            }
        }
        for (int i = 0; i < n; i++) {
            if (color[i] == -1) {
                bool check = bfs(i, color, adj);
                if (check == false)
                    return false;
            }
        }
        return true;
    }
};