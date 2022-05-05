/*
Ringo's Favorite Numbers 2
Link: https://atcoder.jp/contests/abc200/tasks/abc200_c

What is required:
Given a sequence A of N positive integers, find the pair of integers (i,j) satisfying all of the following conditions: 1≤i<j≤N and A[i]−A[j] is a multiple of 200.

Idea:
Suppose 2 numbers p and q and (p-q)%200 = 0.
we can say, p%200 - q%00 = 0
or, p%200 = q%200

Practically, suppose p = 123 then, (p-q)%200 = 0 will hold if q = 323, 523, 723,.. etc. If we mod all those number with 200, we will get 123. 

So, first store modulo of each number and than iterate from 0 to 199 and count them. 
Suppose we got 3 number which have 123(modulo 200). suppose they are, 123 523 123. Then there are 3 combination of pair possible. such as: (123 523), (123 123), (523 123).
So, if we get x number which have same modulo, there are (x(x-1))/2 pair possible.
*/





//BISMILLAHIR RAHMANIR RAHIM
//INNALLAHA_MA_AS_SABIRIN


#pragma GCC target("popcnt")

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
#define      sf(T)              scanf("%lld",&T)
#define      ssf(T)             scanf("%s", T)
#define      pf(T)              printf("%lld",T)
#define      pf2(a,b)           printf("%lld %lld",a,b)
#define      bin_one(n)         __builtin_popcountll(n)
#define      bin_zero(n)        __builtin_ctz(n)
#define      len(n)             (long long)((log(n)/log(10))+1)
#define      PTF(b)             puts(b?"YES":"NO")
#define      Ptf(b)             puts(b?"Yes":"No")
#define      ptf(b)             puts(b?"yes":"no")
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

//Knights moves
//{0,-1,-1,-2,-2,2,2,1,1};
//{0,-2,2,-1,1,-1,1,-2,2};

//Function prototypes
inline void ls();
inline ll ceill(ll n, ll k=1);
long long maxx(ll=0,ll=0,ll=0,ll=0,ll=0);
long long min(ll=INT_MAX,ll=INT_MAX,ll=INT_MAX,ll=INT_MAX,ll=INT_MAX);
bool cmp1(pair<ll,ll> i1,pair<ll,ll> i2);
bool cmp2(pair<ll,ll> a, pair<ll,ll> b);
long long eugcd(ll a,ll b);

//Solve here...


int main()
{
    ls();
    
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif


    int i,j;

    ntest_inp()
    {
        ll n; cin >> n ;

        map<ll, ll>mp;
        
        loop(i, n) 
        {
            ll a; cin >> a;
            mp[a%200]++;
        }

        ll c = 0;
        map<ll, ll>::iterator it;

        for(it=mp.begin(); it!=mp.end(); it++)
        {
            ll x = it->second ;
            x = (x*(x-1))/2 ;
            c += x ;
        }

        cout << c << endl;

        
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
