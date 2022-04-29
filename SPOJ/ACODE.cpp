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
#define      ntest_inp()        for(int Tc=0;Tc<1;Tc++)
#define      sf(T)              scanf("%lld",&T)
#define      ssf(T)             scanf("%s", T)
#define      pf(T)              printf("%lld",T)
#define      pf2(a,b)           printf("%lld %lld",a,b)
#define      bin_one(n)         __builtin_popcountll(n)
#define      bin_zero(n)        __builtin_ctz(n)
#define      len(n)             (long long)((log(n)/log(10))+1)
#define      ptf(b)             puts(b?"YES":"NO")
#define      newline            cout<<endl
#define      quit               return 0
 
 
using namespace std;
using namespace __gnu_pbds;
 
//typedefs
typedef long long ll;
typedef pair<ll,ll> pll;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;
 
//constants
const ll mod=1000000007;
 
//Function prototypes
inline void ls();
long long max(ll=0,ll=0,ll=0,ll=0,ll=0);
long long min(ll=INT_MAX,ll=INT_MAX,ll=INT_MAX,ll=INT_MAX,ll=INT_MAX);
bool cmp1(pair<ll,ll> i1,pair<ll,ll> i2);
bool cmp2(pair<ll,ll> a, pair<ll,ll> b);
long long eugcd(ll a,ll b);
inline ll ceill(ll n, ll k=1);
 
 
 
//Solve here...
 
ll key[100000] = {0};
ll lft[100000] = {-1};
ll rght[100000] = {-1};
ll s[100000] = {INT_MAX} ;
ll l[100000] = {INT_MIN} ;
 
 
 
int main()
{
    ls();
    //freopen("ain.txt","r",stdin);
    //freopen("aoutt.txt","w",stdout);
 
    ll i,j=0 ;
 
    while(true)
    {
        string s;
        cin >> s ;
 
        if(s == "0")
            break;
 
        ll n = s.size();
 
        ll dp[n+1];
        loop(i,n)
            dp[i] = 0 ;
        dp[0]=1;
 
        for(i=1;i<n;i++)
        {
            ll p = (int)s[i-1] - '0' ;
            ll q = (int)s[i] - '0' ;
            ll d = 10*p + q ;
 
 
            if(q != 0)
                dp[i] = dp[i-1] ;
 
 
            if(d>9 && d<27)
            {
                if(i == 1)
                    dp[i] = dp[i] + 1 ;
                else
                    dp[i] = dp[i] + dp[i-2] ;
            }
        }
 
        cout << dp[n-1] << endl;
 
    }
    quit;
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
//.......Functions here......
 
//Faster your code
inline void ls()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
}
//Multiple Maximum
ll max(ll a, ll b, ll c, ll d, ll e)
{
    ll ans = a>b ? a : b ;
    ans = ans > c ? ans : c ;
    ans = ans > d ? ans : d ;
    ans = ans > e ? ans : e ;
 
    return ans;
}
//Multiple Minimum
ll min(ll a, ll b, ll c, ll d, ll e)
{
    ll ans = a<b ? a : b ;
    ans = ans < c ? ans : c ;
    ans = ans < d ? ans : d ;
    ans = ans < e ? ans : e ;
 
    return ans;
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
//ceil
inline ll ceill(ll n, ll k)
{
    return (n/k)+bool(n%k);
}
//......Function over
 
