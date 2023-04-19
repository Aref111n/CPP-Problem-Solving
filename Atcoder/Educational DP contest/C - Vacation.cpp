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

        ll a[n+3], b[n+3], c[n+3] ;

        for(int i=1; i<=n; i++)

            cin >> a[i] >> b[i] >> c[i] ;

        

        ll dp[n+2][4] ;

        dp[1][1] = a[1] ;

        dp[1][2] = b[1] ;

        dp[1][3] = c[1] ;

        

        for(int i=2; i<=n; i++) {

            dp[i][1] = max(dp[i-1][2], dp[i-1][3])+a[i] ;

            dp[i][2] = max(dp[i-1][1], dp[i-1][3])+b[i] ;

            dp[i][3] = max(dp[i-1][1], dp[i-1][2])+c[i] ;

        }

        

        cout << max(dp[n][1], max(dp[n][2], dp[n][3])) ;

    }

} 
