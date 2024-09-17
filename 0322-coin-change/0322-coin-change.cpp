class Solution {
public:
    int ans = INT_MAX;
    vector<vector<int>> memo;

    void solve(vector<int>& coins, int amount, int i, int sum, int k) {
        // Base case: if the sum equals the target amount
        if (sum == amount) {
            ans = min(ans, k);
            return;
        }

        // If sum exceeds the amount or index out of bounds, return
        if (sum > amount || i >= coins.size() || k > amount) {
            return;
        }

        // Check the memoization table to avoid recomputation
        if (memo[i][sum] != -1 && memo[i][sum] <= k) {
            return;
        }

        // Memoize the current state (index and sum)
        memo[i][sum] = k;

        // Explore all possibilities from the current index
        for (int j = i; j < coins.size(); j++) {
            sum += coins[j];
            k++;
            solve(coins, amount, j, sum, k);
            sum -= coins[j];  // Backtrack
            k--;  // Backtrack the coin count
        }
    }

    int coinChange(vector<int>& coins, int amount) {
        // Initialize memo table with -1 indicating that no state has been computed yet
        memo.resize(coins.size(), vector<int>(amount + 1, -1));

        int k = 0;  // Start with 0 coins used
        solve(coins, amount, 0, 0, k);
        return ans != INT_MAX ? ans : -1;  // Return the result or -1 if no solution
    }
};
