#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll mod = 1000000007 ;
 
int main() {
    ll tc = 1 ;
    //cin >> tc ;
    while(tc--) {
        ll n ;
        cin >> n ;
        ll dp[n+1] ;
        memset(dp, 0, sizeof dp) ;
        dp[0]=1 ;
        for(int i=1; i<=n; i++) {
            dp[i] = (dp[i]+dp[i-1])%mod ;
            if(i>1)
                dp[i] = (dp[i]+dp[i-2])%mod ;
            if(i>2)
                dp[i] = (dp[i]+dp[i-3])%mod ;
            if(i>3)
                dp[i] = (dp[i]+dp[i-4])%mod ;
            if(i>4)
                dp[i] = (dp[i]+dp[i-5])%mod ;
            if(i>5)
                dp[i] = (dp[i]+dp[i-6])%mod ;
        }
 
        cout << dp[n] << endl;
    }
}
