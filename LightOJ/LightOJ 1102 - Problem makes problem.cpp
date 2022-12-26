#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll mod = 1e9 + 7 ;

ll fact[2000005] ;
void factorial() {
    fact[0]=1 ;
    for(int i=1; i<=2000000; i++)
        fact[i] = (i*fact[i-1])%mod ;
}

ll bigmod(ll b, ll p){
    if(p==0) return 1;
    ll x=bigmod(b, p/2);
    x=(x*x)%mod;
    if(p%2==1)x=(x*b)%mod;
    return x;
}

ll nCr(ll n, ll r) {
    ll nn = fact[n] ;
    ll rr = fact[r] ;
    ll nr = fact[n-r] ;
    //cout << nn << " " << rr << " " << nr << endl ;
    ll d = (rr*nr)%mod ;
    ll p = bigmod(d, mod-2) ;
    return (nn*p)%mod ;
}

int main() {
    ll tc, z=1 ;
    factorial() ;

    cin >> tc ;
    while(tc--) {
        ll n, k ;
        cin >> n >> k ;
        cout << "Case " << z++ << ": " << nCr(n+k-1, k-1) << endl ;
    }
    return 0 ;
}
