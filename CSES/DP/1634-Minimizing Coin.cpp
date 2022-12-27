#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll mod = 1000000007 ;
 
int main() {
    ll tc = 1 ;
    //cin >> tc ;
    while(tc--) {
        ll n, x ;
        cin >> n >> x ;
        ll a[n+1] ;
        for(int i=0; i<n; i++)
            cin >> a[i] ;
        ll dp[x+1] ;
        dp[0]=0 ;
        for(int i=1; i<=x; i++) {
            ll mn = 1e18 ;
            for(int j=0; j<n; j++) {
                if(i-a[j]>=0)
                    mn = min(mn, dp[i-a[j]]+1) ;
            }
            dp[i] = mn ;
         }
        if(dp[x]==1e18)
            cout << -1 << endl ;
        else
            cout << dp[x] << endl ;
    }
}#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll mod = 1000000007 ;
 
int main() {
    ll tc = 1 ;
    //cin >> tc ;
    while(tc--) {
        ll n, x ;
        cin >> n >> x ;
        ll a[n+1] ;
        for(int i=0; i<n; i++)
            cin >> a[i] ;
        ll dp[x+1] ;
        dp[0]=0 ;
        for(int i=1; i<=x; i++) {
            ll mn = 1e18 ;
            for(int j=0; j<n; j++) {
                if(i-a[j]>=0)
                    mn = min(mn, dp[i-a[j]]+1) ;
            }
            dp[i] = mn ;
         }
        if(dp[x]==1e18)
            cout << -1 << endl ;
        else
            cout << dp[x] << endl ;
    }
}
