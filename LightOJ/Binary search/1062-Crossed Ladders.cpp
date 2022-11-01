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
    cin >> tc ;
    while(tc--) {
        double x, y, c ;
        cin >> x >> y >> c ;
        double l=0, r = min(x, y), m, ans = -1;
        while(r-l>0.0000001) {
            m = (l+r)/2 ;

            if(bscheck(m, x, y)==c) {
                ans = m ;
                break;
            }
            else if(bscheck(m, x, y) > c)
                l = m+0.0000001 ;
            else
                r = m ;
        }

        if(ans == -1) {
            if(bscheck(l, x, y)==c)
                ans = l ;
            else
                ans = r ;
        }

        cout << "Case " << z++ << ": " << fixed << setprecision(6) << l << endl ;
    }
    return 0;
}
