class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();  // Size of the grid (n x n)
        int expectedSum = (n*n * (n*n + 1)) / 2;  // Sum of numbers from 1 to n
        
        unordered_map<int, int> m;  // To store the frequency of numbers
        int actualSum = 0;  // Sum of elements in the grid
        int repeated = 0;   // The repeated number
        
        // Iterate over the grid and calculate actual sum and find the repeated number
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int num = grid[i][j];
                m[num]++;
                actualSum += num;
                
                // If a number is repeated, store it
                if (m[num] == 2) {
                    repeated = num;
                }
            }
        }
        
        // Calculate missing number using the formula
        int missing = expectedSum - (actualSum - repeated);
        
        return {repeated, missing};
    }
};
