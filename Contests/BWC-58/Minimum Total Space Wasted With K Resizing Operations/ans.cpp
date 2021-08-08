class Solution {
    const int inf = 1e9 + 7;
public:
    int minSpaceWastedKResizing(vector<int>& a, int k) {
        int n = a.size(); a.insert(a.begin(), 0);
        vector <vector <int>> dp(n + 1, vector <int> (k + 2, inf));
        dp[0][0] = 0;
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= k + 1; j++){
                int mx = 0, sum = 0;
                for (int k = i; k >= 1; k--){
                    mx = max(mx, a[k]);
                    sum += a[k];
                    dp[i][j] = min(dp[i][j], dp[k - 1][j - 1] + mx * (i - k + 1) - sum);
                }
            }
        }
        return dp[n][k + 1];
    }
};
