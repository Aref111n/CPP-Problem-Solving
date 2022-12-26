class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        long long int dp[amount+1] ;
        for(int i=0; i<=amount; i++)
            dp[i]=1e9 ;

        long long int n = coins.size() ;
        dp[0]=0 ;
        for(int i=0; i<n; i++) {
            for(int j=coins[i]; j<=amount; j++) {
                dp[j] = min(dp[j], dp[j-coins[i]]+1) ;
            }
        }

        return (dp[amount]==1e9? -1: dp[amount]) ;
    }
};
