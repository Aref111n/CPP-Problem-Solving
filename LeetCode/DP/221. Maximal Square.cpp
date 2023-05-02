class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int n = matrix.size() ;
        int m = matrix[0].size() ;

        int dp[n+2][m+2] ;
        memset(dp, 0, sizeof dp) ;

        int mx = 0 ;
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=m; j++) {
                if(matrix[i-1][j-1]=='1') {
                    dp[i][j] = min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]})+1 ;
                    mx = max(mx, dp[i][j]) ;
                }
            }
        }

        return mx*mx ;
    }
};
