//BISMILLAHIR RAHMANIR RAHIM
//INNALLAHA_MA_AS_SABIRIN
 
 
 
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
#define      __                 <<" "<<
#define      loop(m,n)          for(m=0;m<n;m++)
#define      loop1(m,n)         for(m=1;m<=n;m++)
#define      rloop(m,n)         for(m=n-1;m>=0;m--)
#define      case()             "Case " << z++ << ": "
#define      test_inp()         ll Tc,z=1;cin>>Tc;while(Tc--)
#define      ntest_inp()        for(int Tc=0;Tc<1;Tc++)
#define      len(n)             (long long)((log(n)/log(10))+1.0000000001)
#define      PTF(b)             puts(b?"YES":"NO")
#define      Ptf(b)             puts(b?"Yes":"No")
#define      ptf(b)             puts(b?"yes":"no")
#define      rev                greater<ll>
#define      newline            cout<<endl
#define      quit               return 0
 
 
using namespace std;
using namespace __gnu_pbds;
 
//typedefs
typedef long long ll;
typedef pair<ll,ll> pll;
typedef tree<int,null_type,less_equal<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;
 
//constants
const ll mod=1000000007;
 
 
//Function prototypes
inline void ls();
inline ll ceill(ll n, ll k=1);
long long maxx(ll=0,ll=0,ll=0,ll=0,ll=0);
long long minn(ll=INT_MAX,ll=INT_MAX,ll=INT_MAX,ll=INT_MAX,ll=INT_MAX);
bool cmp1(pair<ll,ll> i1,pair<ll,ll> i2);
bool cmp2(pair<ll,ll> a, pair<ll,ll> b);
long long eugcd(ll a,ll b);
 
//Solve here...
string dp[106][106] ;

string lcs(string a, string b)
{
    ll n = a.size() ;
    ll m = b.size() ;

    ll i, j;

    loop(i, n+1) dp[i][0] = "" ;
    loop(i, m+1) dp[0][i] = "" ;

    loop1(i, n)
    {
        loop1(j, m)
        {
            if(a[i-1] == b[j-1])
                dp[i][j] = dp[i-1][j-1] + a[i-1];
            else
            {
                ll p = dp[i-1][j].size() ;
                ll q = dp[i][j-1].size() ;

                if(p>q)
                    dp[i][j] = dp[i-1][j] ;
                else if(q>p)
                    dp[i][j] = dp[i][j-1] ;
                else
                    dp[i][j] = min(dp[i-1][j], dp[i][j-1]);
            }
        }
    }

    return dp[n][m] ;

}

int main()
{
    ls();
    
#ifndef ONLINE_JUDGE
    freopen("inp.txt", "r", stdin);
    freopen("outp.txt", "w", stdout);
#endif

    ll i,j,k;
 
    test_inp()
    {
        string a, b;
        cin >> a >> b ;

        string ans = lcs(a, b);
        if(ans.size() == 0)
            cout << case() << ":(" << endl;
        else
            cout << case() << ans << endl;

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
ll maxx(ll a, ll b, ll c, ll d, ll e)
{
    ll ans = a>b ? a : b ;
    ans = ans > c ? ans : c ;
    ans = ans > d ? ans : d ;
    ans = ans > e ? ans : e ;
 
    return ans;
}
//Multiple Minimum
ll minn(ll a, ll b, ll c, ll d, ll e)
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
