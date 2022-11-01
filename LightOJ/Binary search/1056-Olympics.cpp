#include<bits/stdc++.h>
using namespace std;

typedef long long ll ;

double bscheck(double x, double a, double b) {
    double len = a*x ;
    double wid = b*x ;
    double d = sqrt((len*len)+(wid*wid)) ;
    double r = d/2 ;
    double theta = 2*asin(wid/(2*r)) ;
    double s = r*theta ;
    double ans = (2*s)+(2*len) ;
    return ans ;
}

int main()
{
    ll tc = 1, z=1 ;
    cin >> tc ;
    while(tc--) {
        double a, b ;
        char ch ;
        cin >> a >> ch >> b ;
        double l=0, r=400, ans = -1 ;

        while(r-l > 0.0000000001) {
            double m = (l+r)/2 ;
            if(bscheck(m, a, b)==400) {
                ans = m ;
                break;
            }
            if(bscheck(m, a, b)<400)
                l=m+0.0000000001;
            else
                r=m ;
        }

        if(ans == -1) {
            if(bscheck(l,a ,b)==400)
                ans = l ;
            else
                ans = r ;
        }
        cout << "Case " << z++ << ": " << fixed << setprecision(20) << ans*a << " " << ans*b << endl ;
    }
    return 0;
}
