#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll ;
 
double bscheck(double m, double x, double y) {
    double h1 = sqrt((x*x)-(m*m)) ;
    double h2 = sqrt((y*y)-(m*m)) ;
    return (h1*h2)/(h1+h2) ;
}
 
int main()
{
    ll tc = 1, z=1 ;
    //cin >> tc ;
    while(tc--) {
        ll n, m ;
        cin >> n >> m ;
 
        multiset<ll>s ;
        for(int i=0; i<n; i++) {
            ll a;
            cin >> a;
            s.insert(a) ;
        }
 
        for(int i=0; i<m; i++) {
            ll k; cin >> k ;
            auto v = s.upper_bound(k) ;
            if(v == s.begin())
                cout << -1 << endl ;
            else {
                v-- ;
                cout << *v << endl ;
                s.erase(v) ;
            }
        }
 
    }
    return 0;
}
