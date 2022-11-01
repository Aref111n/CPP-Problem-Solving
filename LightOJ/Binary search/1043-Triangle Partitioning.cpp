#include<bits/stdc++.h>
#define ll long long
#define pll pair<ll, ll>
using namespace std;

int main()
{
    //psieve() ;
    ll tc ;
    cin >> tc ;
    ll z=1 ;
    while(tc--)
    {
        double a, b, c, r ;
        cin >> a >> b >> c >> r ;
        double n = r/(r+1) ;
        cout << "Case " << z++ << ": " << fixed << setprecision(10) << a*sqrt(n) << endl ;
    }
}
