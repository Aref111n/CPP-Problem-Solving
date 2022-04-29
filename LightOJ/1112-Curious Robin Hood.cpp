//BISMILLAHIR RAHMANIR RAHIM
//INNALLAHA_MA_AS_SABIRIN

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

#define      __                 <<" "<<
#define      loop(m,n)          for(m=0;m<n;m++)
#define      loop1(m,n)         for(m=1;m<=n;m++)
#define      rloop(m,n)         for(m=n-1;m>=0;m--)
#define      say(VAL)           ll VAL; cin >> VAL  
#define      case()             "Case " << z++ << ":" << endl 
#define      Gooo               \
                                ios_base::sync_with_stdio(false); \
                                cin.tie(0);

#define      test_inp()         ll Tc,z=1;cin>>Tc;while(Tc--)
#define      ntest_inp()        for(int Tc=0;Tc<1;Tc++)
#define      len(n)             (long long)((log(n)/log(10))+1.0000000001)
#define      PTF(b)             puts(b?"YES":"NO")
#define      Ptf(b)             puts(b?"Yes":"No")
#define      ptf(b)             puts(b?"yes":"no")
#define      take(arr, n)       loop(i, n) cin>>arr[i] 
#define      rev                greater<ll>
#define      newline            cout<<endl
#define      pqmn               priority_queue<ll, vector<ll>, std::greater<ll> >
#define      quit               return 0


using namespace std;
using namespace __gnu_pbds;

//typedefs
typedef long long ll;
typedef pair<ll,ll> pll;
typedef tree<int,null_type,less_equal<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;


//Function prototypes
inline void ls();
inline ll ceill(ll n, ll k=1);
long long maxx(ll=0,ll=0,ll=0,ll=0,ll=0);
long long minn(ll=1e18,ll=1e18,ll=1e18,ll=1e18,ll=1e18);
bool cmp1(pair<ll,ll> i1,pair<ll,ll> i2);
bool cmp2(pair<ll,ll> a, pair<ll,ll> b);
long long eugcd(ll a,ll b);

//constraints...
const ll MX = 100006 ;
const ll MXX = 1'000'006 ;
const ll mod = 1000000007 ;
const ll mod1 = 998244353 ;
const double pi = 3.14159265358979323846 ;

//Solve here...
bool cmp3(const pair<ll,ll> &a,
         const pair<ll,ll> &b)
{
    if(a.first==b.first)
        return (a.second > b.second);
    else
        return (a.first < b.first);
}

ll bigmod(ll b, ll p){
    if(p==0) return 1;
    ll x=bigmod(b, p/2);
    x=(x*x)%mod1;
    if(p%2==1)x=(x*b)%mod1;
    return x;
}

//knights move
/*ll kx[] = {-2, -2, -1, -1,  1,  1,  2,  2};
ll ky[] = {-1,  1, -2,  2, -2,  2, -1,  1};*/

/*bool sieve[500];
void primesieve()
{
    ll i;
    sieve[0]=sieve[1]=1;
    for(i=4;i<505;i+=2)
        sieve[i]=1;
    ll sq=sqrt(505);
    for(i=3;i<sq;i+=2)
    {
        if(sieve[i]==0)
        {
            for(ll j=i*i;j<=505;j+=2*i)
                sieve[j]=1;
        }
    }
}*/

//SEGMENT TREE
ll tab[400024];
ll arr[100006];

void init(ll v, ll b, ll e)
{
    if(b==e)
        tab[v] = arr[b];
    else
    {
        ll l = v*2 , r = v*2 + 1 ;
        ll m = (b+e)/2 ;
        init(l, b, m);
        init(r, m+1, e);
        tab[v] = tab[l] + tab[r] ;
    } 
}

ll query(ll v, ll b, ll e, ll i, ll j)
{
    if(i>e || j<b) return 0;
    if(i<=b && j>=e) return tab[v] ;
    ll l = v*2 , r = v*2 + 1, m = (b+e)/2 ;
    return query(l, b, m, i, j)+query(r, m+1, e, i, j);
}

void update(ll v, ll b, ll e, ll i, ll val)
{
    if(i<b || i>e) return; 
    if(b==i && e==i)
    {
        cout << tab[v] << endl ;
        tab[v] = val ;
        return;
    }
    ll l = v*2 , r = v*2 + 1, m = (b+e)/2 ;
    update(l, b, m, i, val);
    update(r, m+1, e, i, val);
    tab[v] = tab[l] + tab[r] ;
}

void update1(ll v, ll b, ll e, ll i, ll val)
{
    if(i<b || i>e) return; 
    if(b==i && e==i)
    {
        tab[v] += val ;
        return;
    }
    ll l = v*2 , r = v*2 + 1, m = (b+e)/2 ;
    update1(l, b, m, i, val);
    update1(r, m+1, e, i, val);
    tab[v] = tab[l] + tab[r] ;
}


int main()
{ 
#ifndef ONLINE_JUDGE
 freopen("inp.txt", "r", stdin);
 freopen("outp.txt", "w", stdout);
#endif
    ll i, j, k, n ;
    /*ll Log[55] ;
    Log[0] = 1 ;
    loop1(i, 32)
        Log[i] = Log[i-1]*2 ;*/
    
    /*ll fac[1005] ;
    fac[0]=1 ;
    loop1(i, 501) {
        fac[i] = (fac[i-1]*i)%mod1 ;
    }*/

    test_inp() {
        ll n, m ;
        cin >> n >> m ;

        loop1(i, n) cin>>arr[i] ;

        init(1, 1, n);

        cout << case() ;

        loop(i, m) {
            ll p ;
            cin >> p ;
            if(p==1) {
                ll k ;
                cin >> k ;
                update(1, 1, n, k+1, 0);
            }
            else if(p==2) {
                ll k, v ;
                cin >> k >> v ;
                update1(1, 1, n, k+1, v) ;
            }
            else {
                ll x, y ;
                cin >> x >> y ;
                /*loop1(j, n) cout << arr[j] << " " ;
                newline;*/
                cout << query(1, 1, n, x+1, y+1) << endl ;
            }
        }     
    }
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
