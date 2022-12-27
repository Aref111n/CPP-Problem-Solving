#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
const ll mod = 1000000007 ;
 
int main()
{
    ll n, w ;
    cin >> n >> w ;
    ll a[n+1] ;
    for(int i=0; i<n; i++)
        cin >> a[i] ;
    ll dp[w+1] ;
    memset(dp, 0, sizeof dp);
    dp[0]=1 ;
    for(int i=0; i<n; i++) {
        for(int j=a[i]; j<=w; j++) {
            dp[j] = (dp[j]+dp[j-a[i]])%mod ;
        }
    }
 
    cout << dp[w] << endl ;
}
