class Solution {
public:
    int minSpeedOnTime(vector<int>& dist, double hour) {

        int i = 1;
        int j = 1e7;
        int result = -1;

        while (i <= j) {

            int mid = i + (j - i) / 2;

            double sum = 0;

            for (int k = 0; k < dist.size(); k++) {

                if (k < dist.size() - 1)
                    sum += ceil((double)dist[k] / mid);
                else
                    sum += (double)dist[k] / mid;
            }

            if (sum <= hour) {
                result = mid;     
                j = mid - 1;       
            }
            else {
                i = mid + 1;      
            }
        }

        return result;
    }
};