#include<bits/stdc++.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<cmath>

#define ls ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define quit return 0

using namespace std;

int main()
{
    ls
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int t,l=1;
    cin >> t ;
    while(t>0)
    {
        double R,n,cone;
        cin >> R >> n ;
        cone=sin((360*3.141592653589)/(2.0*n*180));
        printf("Case %d: %.10lf\n",l++,(R/((1/cone)+1)) );
        t--;
    }
    quit;

}
