#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll mod = 1e9 + 7 ;

ll nCr(ll n, ll r) {
    if(r<n-r) r=n-r ;
    ll ans=1;
    for(int i=0; i<n-r; i++)
        ans = (ans*(n-i))/(i+1) ;
    return ans ;
}

int main() {
    ll tc, z=1 ;
    cin >> tc ;
    while(tc--) {
        ll n, k ;
        cin >> n >> k ;
        cout << nCr(n-1, min(n-k, k-1)) << endl ;
    }
    return 0 ;
}
