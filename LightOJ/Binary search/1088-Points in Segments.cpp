#include<bits/stdc++.h>
#define ll long long
#define pll pair<ll, ll>
using namespace std;

ll lb(ll a[], ll n, ll v) {
    ll l=0, r=n-1 ;
    while(l<=r) {
        ll m = (l+r)/2 ;
        if(a[m]<v)
            l = m+1 ;
        else
            r = m-1 ;
    }

    return l ;
}

ll ub(ll a[], ll n, ll v) {
    ll l=0, r=n-1 ;
    while(l<=r) {
        ll m = (l+r)/2 ;
        if(a[m]<=v)
            l = m+1 ;
        else
            r = m-1 ;
    }

    return l ;
}

int main()
{
    //psieve() ;
    ll tc ;
    cin >> tc ;
    ll z=1 ;
    while(tc--)
    {
        cout << "Case " << z++ << ":" << endl ;
        ll n, m ;
        cin >> n >> m ;
        ll a[n+4] ;
        for(int i=0; i<n; i++)
            cin >> a[i];
        for(int i=0; i<m; i++) {
            ll p, q ;
            cin >> p >> q ;
            cout << ub(a, n, q) - lb(a, n, p) << endl ;
        }
    }
}
