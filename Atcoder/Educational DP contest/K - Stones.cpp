#include <bits/stdc++.h>
using namespace std;
typedef long long int ll ;

ll n, k ;
ll a[105] ;
ll dp[100005] ;

bool sol(ll s) {
	if(s>k) return 0 ;
	if(dp[s]!=-1) return dp[s] ;
	
	ll op = 0 ;
	for(int i=1; i<=n; i++) {
		bool v = sol(s+a[i]) ;
		op = (op|v) ;
	}
	
	return dp[s] = (!op);
}

int main() {
	// your code goes here
	cin >> n >> k ;
	for(int i=1; i<=n; i++)
		cin >> a[i] ;
	memset(dp, -1, sizeof dp) ;
	
	if(!sol(0))
		cout << "First" << endl ;
	else
		cout << "Second" << endl ;
	
	return 0;
}
