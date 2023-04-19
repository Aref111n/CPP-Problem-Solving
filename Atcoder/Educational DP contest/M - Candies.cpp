#include <bits/stdc++.h>
using namespace std;
typedef long long int ll ;
const ll mod = 1000000007 ;

ll dp[101][100002], cm[101][100002] ;

int main() {
	// your code goes here
	ll n, k ;
	cin >> n >> k ;
	
	ll a[n+2] ;
	for(int i=1; i<=n; i++)
		cin >> a[i] ;
	
	dp[0][0] = 1 ;
	for(int i=0; i<=k; i++)
		cm[0][i] = 1 ;
	
	for(int i=1; i<=n; i++) {
		dp[i][0] = cm[i][0] = 1 ;
		for(int j=1; j<=k; j++) {
			if(j>a[i])
				dp[i][j] = (cm[i-1][j] - cm[i-1][j-a[i]-1] + mod)%mod ;
			else
				dp[i][j] = cm[i-1][j] ;
				
			cm[i][j] = (cm[i][j-1] + dp[i][j])%mod ;
		}
	}
	
	cout << dp[n][k] << endl ;
	
	return 0;
}
