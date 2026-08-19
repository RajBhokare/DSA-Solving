class Solution {
public:
    int countVowelStrings(int n) {
        vector <int>dp(5,1);

        for(int len=2; len<=n;len++){
            for(int i=1;i< 5;i++){
                dp[i] += dp[i-1];
            }
        }
        return dp[0] + dp[1] + dp[2] + dp[3] + dp[4];
    }
};