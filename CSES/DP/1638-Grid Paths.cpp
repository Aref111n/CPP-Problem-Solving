#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll mod = 1000000007 ;
 
struct dd{
    ll v=0 ;
    ll p=0;
};
 
int main() {
    ll tc = 1 ;
    //cin >> tc ;
    while(tc--) {
        ll n ;
        cin >> n ;
        string s[n+1] ;
        for(int i=0; i<n; i++)
            cin >> s[i] ;
        ll dp[n+1][n+1] ;
        memset(dp, 0, sizeof dp) ;
        dp[1][1] = (s[0][0]=='.') ;
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=n; j++) {
                if(s[i-1][j-1]=='*' || (i==1 && j==1))
                    continue ;
                else {
                    dp[i][j] = (dp[i-1][j] + dp[i][j-1])%mod ;
                }
            }
        }
 
        cout << dp[n][n] << endl ;
    }
}
