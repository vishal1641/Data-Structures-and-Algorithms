class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        if (points.size() <= 2)
            return points.size();

        int ans = 0;
        for (int i = 0; i < points.size(); i++) {
            unordered_map<double, int> m;
            for (int j = i+1; j < points.size(); j++) {
                if (points[i][0] == points[j][0] &&
                    points[i][1] == points[j][1])
                    continue;
                    double slope;
                if (points[i][0]== points[j][0]) {
                    slope = DBL_MAX;
                } else {
                    slope =(double) (points[j][1] - points[i][1]) /
                            (points[j][0] - points[i][0]);
                }

                m[slope]++;
                ans = max(ans, m[slope]);
            }
        }
            return ans + 1;
    }
};