#include <bits/stdc++.h>
using namespace std;
typedef long long int ll ;
const ll mod = 1000000007 ;

int main() {
	// your code goes here
	int h, w ;
	cin >> h >> w ;
	
	ll dp[h+2][w+2] ;
	memset(dp, 0, sizeof dp) ;
	dp[0][1] = 1 ;
	for(int i=1; i<=h; i++) {
		string s ; cin >> s ;
		for(int j=1; j<=w; j++) {
			if(s[j-1] != '#')
				dp[i][j] = (dp[i-1][j]+dp[i][j-1])%mod;
		}
	}
	
	cout << dp[h][w] << endl ;
	return 0;
}
