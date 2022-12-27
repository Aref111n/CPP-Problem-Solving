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
        memset(dp, 0, sizeof dp) ;
        dp[0]=1 ;
        for(int i=1; i<=x; i++) {
            for(int j=0; j<n; j++) {
                if(i-a[j]>=0)
                    dp[i]= (dp[i]+dp[i-a[j]])%1000000007;
            }
         }
 
         cout << dp[x] << endl ;
    }
}
