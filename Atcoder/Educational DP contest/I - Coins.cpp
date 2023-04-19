#include <bits/stdc++.h>
using namespace std;
typedef long long int ll ;

int main() {
	// your code goes here
	ll n;
	cin >> n ;
	double f[n+1] ;
	for(int i=1; i<=n; i++)
		cin >> f[i] ;
	
	double dp[n+2][n+2] ;
	memset(dp, 0, sizeof dp) ;
	
	dp[0][0]=1 ;
	for(int i=1; i<=n; i++) {
		dp[i][0] = dp[i-1][0]*(1-f[i]) ;
		for(int j=1; j<=i; j++) {
			dp[i][j] = (dp[i-1][j-1]*f[i])+(dp[i-1][j]*(1-f[i])) ;
		}
	}
	
	double s = 0 ; 
	for(int i=n; i>(n/2); i--) {
		s += dp[n][i] ;
	}
	
	cout << fixed << setprecision(20) << s << endl ;
	
	return 0;
}
