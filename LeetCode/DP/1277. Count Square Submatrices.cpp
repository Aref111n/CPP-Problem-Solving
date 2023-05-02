class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int n = matrix.size() ;
        int m = matrix[0].size() ;
        int dp[n+2][m+2] ;
        memset(dp, 0, sizeof dp) ;

        int cnt = 0 ;
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=m; j++) {
                if(matrix[i-1][j-1])
                    dp[i][j] = min({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]})+1 ;
                cnt += dp[i][j] ;
            }
        }
        //cout << cnt << endl ;

        return cnt ;
    }
};
