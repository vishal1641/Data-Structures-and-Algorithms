class Solution {
public:
    int maxFreeTime(int eventTime, int k, vector<int>& startTime,
                    vector<int>& endTime) {
        vector<int> v;
        v.push_back(startTime[0]);
        for (int i = 1; i < startTime.size(); i++) {
            v.push_back(startTime[i] - endTime[i - 1]);
        }
        v.push_back(eventTime-endTime[endTime.size()-1]);
        k = k + 1;
        int maxi=0;
        int sum=0;
        int i = 0, j = 0;
        
        while (j < v.size()) {
            sum += v[j];
            if (j - i + 1 < k)
                j++;
            else if (j-i+1==k) {
                maxi = max(maxi, sum);
                sum -= v[i];
                j++;
                i++;
            }
        }
        return maxi;
    }
};