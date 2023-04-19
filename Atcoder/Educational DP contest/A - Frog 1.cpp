#include<iostream>

#define ll long long

using namespace std;

int main() {

    ll tc = 1 ;

    //cin >> tc ;

    ll z=1;

    while(tc--) {

        ll n ;

        cin >> n ;

        ll a[n+2] ;

        for(int i=1; i<=n; i++) {

            cin >> a[i] ;

        }

        

        ll dp[n+4] ;

        dp[0] = dp[1] = 0 ;

        dp[2] = abs(a[2] - a[1]) ;

        

        for(int i=3; i<=n; i++) {

            dp[i] = min(dp[i-1]+abs(a[i]-a[i-1]), dp[i-2]+abs(a[i]-a[i-2])) ;

           // cout << dp[i] << endl ;

        }

        

        cout << dp[n] << endl ;

    }

}
