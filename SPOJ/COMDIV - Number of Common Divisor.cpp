//BISMILLAHIR RAHMANIR RAHIM
//INNALLAHA_MA_AS_SABIRIN
//SOTO's
 
#include<bits/stdc++.h>
 
#define ls                    \
                                    ios_base::sync_with_stdio(false); \
                                    cin.tie(0);
#define ll long long
#define __ <<" "<<
#define loop(m,n) for(m=0;m<n;m++)
#define rloop(m,n) for(m=n-1;m>=0;m--)
#define case(z) "Case " << z++ << ": "
#define test_inp() int Tc;cin>>Tc;while(Tc--)
#define sf(T) scanf("%d",&T)
#define pf(T) printf("%d\n",T)
#define ptf(b) puts(b?"Yes":"No")
#define newline cout<<endl
#define quit return 0
using namespace std;
int main()
{
    ls
    //freopen("ainnn.txt","r",stdin);
    //freopen("aoutt.txt","w",stdout);
    //p_sieve();
    int T;
    sf(T);
    while(T--)
    {
        int a,b;
        sf(a);
        sf(b);
        int g=__gcd(a,b);
        int c=0,i;
        for(i=1;i<=sqrt(g);i++)
        {
            if(g%i==0)
            {
                if(g/i==i)
                    c++;
                else
                    c+=2;
            }
        }
        pf(c);
    }
 
    quit;
}
 
