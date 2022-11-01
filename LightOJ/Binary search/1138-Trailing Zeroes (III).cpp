#include<bits/stdc++.h>
#define ll long long
#define pll pair<ll, ll>
using namespace std;

ll traillingzero(ll n)
{
    ll cnt = 0 ;
    ll f=5 ;
    while(n>=f)
    {
        cnt += (n/f) ;
        f *= 5 ;
    }

    return cnt ;
}

int main()
{
    //psieve() ;
    ll tc ;
    cin >> tc ;
    ll z=1 ;
    while(tc--)
    {
        ll n ;
        cin >> n ;
        ll l=1, r=1000000000000000000, m ;
        while(l<=r) {
            m = (l+r)/2 ;
            if(traillingzero(m)<n)
                l = m+1 ;
            else
                r = m-1 ;
        }

        if(traillingzero(l)==n)
            cout << "Case " << z++ << ": " << l << endl ;
        else if(traillingzero(r)==n)
            cout << "Case " << z++ << ": " << r << endl ;
        else
            cout << "Case " << z++ << ": impossible" << endl ;
    }
}
