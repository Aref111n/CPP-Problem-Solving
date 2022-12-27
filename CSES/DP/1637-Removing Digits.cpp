#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
ll maxdigit(ll n) {
    ll mx = 0 ;
    while(n) {
        mx = max(mx, n%10) ;
        n/=10;
    }
    return mx ;
}
 
int main() {
    ll tc = 1 ;
    //cin >> tc ;
    while(tc--) {
        ll n ;
        cin >> n ;
        ll cnt = 0 ;
        while(n>0) {
            ll b = maxdigit(n) ;
            n-=b;
            cnt++ ;
        }
        cout << cnt << endl ;
    }
}
