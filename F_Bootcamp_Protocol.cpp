#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1000000007;

int countSeatingArrangements(int A, int B, int C, int X) {
    // Initialize dp array
    vector<vector<vector<int>>> dp(A + 1, vector<vector<int>>(B + 1, vector<int>(C + 1, 0)));
    dp[0][0][0] = 1;

    // Calculate dp array
    for (int i = 1; i <= A; ++i) {
        for (int j = 0; j <= B; ++j) {
            for (int k = 0; k <= C; ++k) {
                // If j, k, or (i - j - k) exceeds X, set dp[i][j][k] to 0
                if (j > X || k > X || (i - j - k) > X) {
                    dp[i][j][k] = 0;
                } else {
                    // Calculate dp[i][j][k] based on the three possibilities
                    dp[i][j][k] = (j > 0 ? dp[i - 1][j - 1][k] : 0) + (k > 0 ? dp[i - 1][j][k - 1] : 0) + dp[i - 1][j][k];
                    dp[i][j][k] %= MOD;
                }
            }
        }
    }

    // Calculate total arrangements
    int totalArrangements = 0;
    for (int j = 0; j <= B; ++j) {
        for (int k = 0; k <= C; ++k) {
            if (j + k <= A) { // Ensure the total number of students matches
                totalArrangements = (totalArrangements + dp[A][j][k]) % MOD;
            }
        }
    }

    return totalArrangements;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int A, B, C, X;
        cin >> A >> B >> C >> X;
        int result = countSeatingArrangements(A, B, C, X);
        cout << result << endl;
    }
    return 0;
}
