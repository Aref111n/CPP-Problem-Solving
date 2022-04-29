//BISMILLAHIR RAHMANIR RAHIM
//INNALLAHA_MA_AS_SABIRIN
//SOTO's
 
#include<bits/stdc++.h>
 
#define ll long long
#define __ <<" "<<
#define loop(m,n) for(m=0;m<n;m++)
#define rloop(m,n) for(m=n-1;m>=0;m--)
#define case(z) "Case " << z++ << ": "
#define test_inp() ll Tc,l=1;sf(Tc);while(Tc--)
#define sf(T) scanf("%lld",&T)
#define pf(T) printf("%lld\n",T)
#define ptf(b) puts(b?"Yes":"No")
#define newline cout<<endl
#define quit return 0
using namespace std;
ll n,c;
bool isfeasible(ll a[],ll mid)
{
    ll p=a[0],k=1,i;
    for(i=1; i<n; i++)
    {
        if(a[i]-p>=mid)
        {
            k++;
            p=a[i];
            if(k==c)
                return 1;
        }
    }
    return 0;
}
ll bs(ll a[])
{
    ll l=0,r=a[n-1],mid,mx=-1;
    while(l<r)
    {
        mid=(l+r)/2;
        if(isfeasible(a,mid)==1)
        {
            mx=max(mid,mx);
            l=mid+1;
        }
        else
            r=mid;
    }
    return mx;
}
int main()
{
 
    //freopen("ainnn.txt","r",stdin);
    //freopen("aoutt.txt","w",stdout);
    test_inp()
    {
        ll i,k;
        sf(n);
        sf(c);
        ll a[n];
        loop(i,n)
            cin>>a[i];
        sort(a,a+n);
        ll ans=bs(a);
        pf(ans);
    }
    quit;
}
 
