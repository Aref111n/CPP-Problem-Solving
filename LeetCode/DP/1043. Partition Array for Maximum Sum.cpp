class Solution {
public:
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n = arr.size() ;
        int dp[n+2] ;
        memset(dp, 0, sizeof dp) ;

        int mx = 0 ;
        for(int i=0; i<k; i++) {
            mx = max(mx, arr[i]) ;
            dp[i] = mx*(i+1) ;
        }

        for(int i=k; i<n; i++) {
            int mx = 0, mxx = 0 ;
            for(int j=i-1; j>=i-k; j--) {
                mxx = max(mxx, arr[j+1]) ;
                mx = max(mx, dp[j]+mxx*(i-j)) ;
            }
            dp[i] = mx ;
        }

        cout << dp[n-1] << endl ;
        return dp[n-1] ;
    }
};
