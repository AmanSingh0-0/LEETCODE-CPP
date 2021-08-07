#Incomplete...
class Solution {
public:
    int countSpecialSubsequences(vector<int>& nums) {
        int MOD = 1e9 + 7;
        vector<long long> dp(4);
        dp[0] = 1;
        for (int num : nums) {
            int nextNum = num + 1;
            cout<<nextNum<<" "<<endl;
            dp[nextNum] += (dp[nextNum] + dp[nextNum - 1]);
            cout<<"Dp NextNum"<<endl;
            dp[nextNum] = dp[nextNum] % MOD;
            cout<<dp[nextNum]<<endl;
        }
        return dp[3];
    }
};
