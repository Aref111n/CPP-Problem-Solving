#include<iostream>

#define ll long long

using namespace std;

int main() {

    ll tc = 1 ;

    //cin >> tc ;

    ll z=1;

    while(tc--) {

        ll n, k ;

        cin >> n >> k ;

        ll a[n+2] ;

        for(int i=1; i<=n; i++) {

            cin >> a[i] ;

        }

        

        ll dp[n+4] ;

        dp[1] = 0 ;

        

        for(ll i=2; i<=n; i++) {

            dp[i] = 1e18 ;

            for(ll j=1; j<=min(i-1, k); j++) {

                dp[i] = min(dp[i], dp[i-j]+abs(a[i]-a[i-j])) ;

               // cout << dp[i] << endl ;

            }

        }

        

        cout << dp[n] << endl ;

    }

}
