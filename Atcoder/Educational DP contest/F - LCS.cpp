//BISMILLAHIR RAHMANIR RAHIM
//INNALLAHA_MA_AS_SABIRIN
//SOTO's

#pragma GCC target("popcnt")

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>


#define      ls                 \
                                ios_base::sync_with_stdio(false); \
                                cin.tie(0);
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
#define      inify(a,n,v)       loop(i,n) a[i]=v;
#define      bin_one(n)         __builtin_popcountll(n)
#define      bin_zero(n)        __builtin_ctz(n)
#define      ptf(b)             puts(b?"YES":"NO")
#define      newline            cout<<endl
#define      quit               return 0


using namespace std;
using namespace __gnu_pbds;


typedef long long ll;
typedef pair<ll,ll> pll;
typedef tree<
int,
null_type,
greater<int>,
rb_tree_tag,
tree_order_statistics_node_update>
ordered_set;


const ll mod=4294967296;


//.......Functions here......



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

string solve(string a, string b)
{
    ll i,j;
    ll n=a.size();
    ll m=b.size();

    if(n==1 && m==1 && a[0]!=b[0])
        return "" ;

        ll dp[n+2][m+2];
        for(i=0;i<=n;i++)
        {
            for(j=0;j<=m;j++)
            {
                if(i==0||j==0)
                dp[i][j]=0;
                else if(a[i-1]==b[j-1])
                    dp[i][j]=dp[i-1][j-1]+1;
                else
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        ll k=dp[n][m];
        string t="";
        i=n,j=m;
        while(i>0 && j>0)
        {
            if(a[i-1]==b[j-1])
            {
                t+=a[i-1];
                i--;
                j--;
            }
            else if(dp[i-1][j]>dp[i][j-1])
                i--;
            else
                j--;

        }
        reverse(t.begin(),t.end());
        return t;
}
int main()
{
    ls
    //freopen("ain.txt","r",stdin);
    //freopen("aoutt.txt","w",stdout);

    //p_sieve();

    ll i,j=0;
    ntest_inp()
    {
        string a,b;
        cin>>a>>b;
        cout << solve(a,b);
    }
}

