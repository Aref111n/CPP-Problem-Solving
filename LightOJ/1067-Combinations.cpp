//BISMILLAHIR RAHMANIR RAHIM
//SOTO's

#include<bits/stdc++.h>

#define ls ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define __ <<" "<<
#define loop(m,n) for(m=0;m<n;m++)
#define rloop(m,n) for(m=n-1;m>=0;m--)
#define case(z) "Case " << z++ << ": "
#define ptf(b) puts(b?"Yes":"No")
#define newline cout<<endl
#define quit return 0
using namespace std;
bool cmp(const pair<string,ll> &a,
         const pair<string,ll> &b)
{
    if(a.second!=b.second)
        return (a.second > b.second);
    else
        return (a.first < b.first);
}
ll ans,mod=1000003;
ll fac[1000009];
void factorial(ll h)
{
    ll i;
    fac[0]=1;
    for(i=1; i<=h; i++)
    {
        fac[i]=(fac[i-1]*i)%mod;
    }
}
ll bigmod(ll b, ll p){
    if(p==0) return 1;
    ll x=bigmod(b, p/2);
    x=(x*x)%mod;
    if(p%2==1)x=(x*b)%mod;
    return x;
}
int main()
{
    ls
    //freopen("ain.txt","r",stdin);
    //freopen("aoutt.txt","w",stdout);
    factorial(1000000);
    ll T,lll=1;
    cin>>T;
    while(T--)
    {
        ll n,k,f,f1;
        cin>>n>>k;
        f=fac[n];
        f1=(fac[k]*fac[n-k])%mod;
        cout << case(lll) << (f*bigmod(f1,mod-2))%mod << endl;
    }
    quit;
}
