#include <bits/stdc++.h>
using namespace std;
typedef long long int ll ;

vector<ll> adj[100005] ;
ll vis[100005], dp[100005] ;

ll dfs(ll s) {
	vis[s] = 1 ;
	
	if(dp[s]) return dp[s] ;
	//cout << s << endl ;
	ll mx=0 ;
	for(auto it: adj[s]) {
		if(!vis[it]) {
			mx = max(mx, dfs(it)) ;
		} else {
			mx = max(mx, dp[it]) ;
		}
	}
	
	return dp[s] = max(mx+1, dp[s]) ;
}

int main() {
	// your code goes here
	ll n, m ;
	cin >> n >> m ;

	for(int i=0; i<m; i++) {
		ll a, b ; 
		cin >> a >> b ;
		adj[a].push_back(b) ;
	}
	
	ll mx = 0 ;
	for(int i=1; i<=n; i++) {
		if(!vis[i]) {
			mx = max(mx, dfs(i)-1) ;
			//cout << i << " " << mx << endl ;
		}
	}
	
	cout << mx << endl ;
	
	return 0;
}
