#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
 
int main()
{
    ll tc=1 ;
    //cin >> tc ;
    while(tc--) {
        int n, x ;
        cin >> n >> x ;
        int a[n+1], p[n+1] ;
        for(int i=1; i<=n; i++)
            cin >> p[i] ;
        for(int i=1; i<=n; i++)
            cin >> a[i] ;
 
        int dp[n+1][x+1] ;
        memset(dp, 0, sizeof dp) ;
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=x; j++) {
                dp[i][j] = dp[i-1][j] ;
                if(j>=p[i])
                    dp[i][j] = max(dp[i][j], dp[i-1][j-p[i]]+a[i]) ;
            }
        }
 
        cout << dp[n][x] << endl ;
    }
    return 0;
}
