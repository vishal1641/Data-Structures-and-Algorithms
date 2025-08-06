class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        queue<int> q;
        int n = prerequisites.size();
        
        vector<vector<int>> adj(numCourses);
        for (int i = 0; i < n; i++) {
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }

        vector<int> inde(numCourses, 0);
        for (int i = 0; i < numCourses; i++) {
            for (int j = 0; j < adj[i].size(); j++) {
                inde[adj[i][j]]++; 
            }
        }

        for (int i = 0; i < numCourses; i++) {
            if (inde[i] == 0)
                q.push(i);
        }

        vector<int> res;
        while (!q.empty()) {
            int front = q.front();
            q.pop();
            res.push_back(front);
            for (auto it : adj[front]) {
                inde[it]--;
                if (inde[it] == 0)
                    q.push(it);
            }
        }

        if (res.size() == numCourses)
            return res ;
        return {};
    }
};