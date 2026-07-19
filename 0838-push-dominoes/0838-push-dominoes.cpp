class Solution {
public:
    string pushDominoes(string dominoes) {
        int n = dominoes.size();
        int prev = -1;

        for (int i = 0; i < n; i++) {

            if (dominoes[i] == '.')
                continue;

            if (dominoes[i] == 'L') {

                if (prev == -1) {
                    // ....L
                    for (int k = 0; k < i; k++)
                        dominoes[k] = 'L';
                }
                else if (dominoes[prev] == 'L') {
                    // L....L
                    for (int k = prev + 1; k < i; k++)
                        dominoes[k] = 'L';
                }
                else {
                    // R....L
                    int l = prev + 1;
                    int r = i - 1;

                    while (l < r) {
                        dominoes[l++] = 'R';
                        dominoes[r--] = 'L';
                    }
                }
            }
            else { // dominoes[i] == 'R'

                if (prev != -1 && dominoes[prev] == 'R') {
                    // R....R
                    for (int k = prev + 1; k < i; k++)
                        dominoes[k] = 'R';
                }
                // L....R or first R -> do nothing
            }

            prev = i;
        }

        // R....end
        if (prev != -1 && dominoes[prev] == 'R') {
            for (int k = prev + 1; k < n; k++)
                dominoes[k] = 'R';
        }

        return dominoes;
    }
};