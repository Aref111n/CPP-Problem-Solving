#include <bits/stdc++.h>
using namespace std;
typedef long long int ll ;

ll dp[105][100005] ;

int main() {
	// your code goes here
	ll n, w ;
	cin >> n >> w ;
	
	ll wt[n+2], v[n+2] ;
	for(int i=1; i<=n; i++) {
		cin >> wt[i] >> v[i] ;
	}
	
	for(int i=0; i<=n; i++) {
		dp[i][0] = 0 ;
		for(int j=1; j<=100005; j++)
			dp[i][j] = 1e18 ;
	}
	
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=100000; j++) {
			if(j<v[i])
				dp[i][j] = dp[i-1][j] ;
			else
				dp[i][j] = min(dp[i-1][j-v[i]]+wt[i], dp[i-1][j]) ;
		}
	}
	
	ll ans = 0 ;
	for(int v = 100000; v>=0; v--) {
		if(dp[n][v]<=w) {
			ans = v ;
			break;
		}
	}
	
	cout << ans << endl ;
	
	return 0;
}
