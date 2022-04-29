//BISMILLAHIR RAHMANIR RAHIM
//INNALLAHA_MA_AS_SABIRIN
//SOTO's

#pragma GCC target("popcnt")

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>



#define      __                 <<" "<<
#define      loop(m,n)          for(m=0;m<n;m++)
#define      loop1(m,n)         for(m=1;m<=n;m++)
#define      rloop(m,n)         for(m=n-1;m>=0;m--)
#define      case(z)            "Case " << z++ << ": "
#define      test_inp()         ll Tc,l=1;cin>>Tc;while(Tc--)
#define      ntest_inp()        for(int y=0;y<1;y++)
#define      sf(T)              scanf("%lld",&T)
#define      ssf(T)             scanf("%s", T)
#define      pf(T)              printf("%lld",T)
#define      pf2(a,b)           printf("%lld %lld",a,b)
#define      bin_one(n)         __builtin_popcountll(n)
#define      bin_zero(n)        __builtin_ctz(n)
#define      ceil(n,k)          (n/k)+bool(n%k)
#define      size(n)            (long long)(log(n)/log(10)+1)
#define      ptf(b)             puts(b?"Yes":"No")
#define      newline            cout<<endl
#define      quit               return 0

using namespace std;
using namespace __gnu_pbds;


typedef long long ll;
typedef pair<ll,ll> pll;
typedef tree<
int,
null_type,
less<int>,
rb_tree_tag,
tree_order_statistics_node_update>
ordered_set;


const ll mod=10000007;


//.......Functions here......

void ls()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
}
//double sort, both key and value in descending order
//and to make both ascending, use rbegin() and rend()
//priority: key
bool cmp1(pair<ll,ll> i1,pair<ll,ll> i2)
{
    if(i1.first == i2.first)
        return (i1.second> i2.second);
    else
        return (i1.first >i2.first);
}
//double sort, key ascending and value descending
//for vice versa, use rbegin() and rend()
//priority: value
bool cmp2(pair<ll,ll> a, pair<ll,ll> b)
{
    if(a.second!=b.second)
        return (a.second > b.second);
    else
        return (a.first < b.first);
}
//Euclidean gcd
ll eugcd(ll a,ll b)
{
    if(b==0)
        return a;
    ll p=a%b;
    return eugcd(b,p);
}

//......Functions over......


int main()
{
    ls();
    //freopen("ain.txt","r",stdin);
    //freopen("aoutt.txt","w",stdout);
    //p_sieve();
    ll i,j=0,k;
    test_inp()
    {
        ll n;
        cin>>n;

        ll dp[n+1][3];
        dp[0][0]=dp[0][1]=dp[0][2]=0;

        loop1(i,n)
        {
            ll r,g,b;
            cin>>r>>g>>b;
            dp[i][0]=min(r+dp[i-1][1],r+dp[i-1][2]);
            dp[i][1]=min(g+dp[i-1][0],g+dp[i-1][2]);
            dp[i][2]=min(b+dp[i-1][0],b+dp[i-1][1]);
        }

        cout << case(l) << min(dp[n][0],min(dp[n][1],dp[n][2])) << endl;
    }

    quit;
}
