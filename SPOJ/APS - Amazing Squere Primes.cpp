//BISMILLAHIR RAHMANIR RAHIM
//INNALLAHA_MA_AS_SABIRIN
 
#include<bits/stdc++.h>
 
#define ls ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define __ <<" "<<
#define loop(m,n) for(m=0;m<n;m++)
#define rloop(m,n) for(m=n-1;m>=0;m--)
#define case(z) "Case " << z++ << ": "
#define sf(T) scanf("%lld",&T)
#define pf(T) printf("%lld\n",T)
#define ptf(b) puts(b?"Yes":"No")
#define newline cout<<endl
#define quit return 0
using namespace std;
//////////////////////////////////////////////
bool cmp(const pair<string,ll> &a,
         const pair<string,ll> &b)
{
    if(a.second!=b.second)
        return (a.second > b.second);
    else
        return (a.first < b.first);
}
/////////////////////////////////////////////
ll mod;
ll bigmod(ll b, ll p)
{
    if(p==0) return 1;
    ll x=bigmod(b, p/2);
    x=(x*x)%mod;
    if(p%2==1)x=(x*b)%mod;
    return x;
}
/////////////////////////////////////////////
bool isprime(ll n)
{
    if(n%2==0 || n%3==0 || n%5==0)
        return 0;
    for(ll i=7;i<=sqrt(n);i+=2)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
///////////////////////////////////////////////
long long sum(ll x)
{
    if(x==0) return 0;
    ll a;
    cin>>a;
    return a+sum(x-1);
}
/////////////////////////////////////////////
bool leap(ll year)
{
    if (year % 400 == 0)
        return true;
    if (year % 100 == 0)
        return false;
    if (year % 4 == 0)
        return true;
    return false;
}
/////////////////////////////////////////////
vector <ll> prime;
char sieve[15];
void p_sieve(ll n)
{
    ll i;
    sieve[0]=sieve[1]=1;
    prime.push_back(2);
    for(i=4;i<=n;i+=2)
        sieve[i]=1;
    ll sq=sqrt(n);
    for(i=3;i<=sq;i+=2)
    {
        if(sieve[i]==0)
        {
            for(ll j=i*i;j<=n;j+=2*i)
                sieve[j]=1;
        }
    }
    for(i=3;i<=n;i+=2)
    {
        if(sieve[i]==0)
        prime.push_back(i);
    }
}
///////////////////////////////////////////////
string findSum(string str1, string str2)
{
    if (str1.length() > str2.length())
        swap(str1, str2);
    string str = "";
    int n1 = str1.length(), n2 = str2.length();
    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());
    int carry = 0;
    for (int i=0; i<n1; i++)
    {
        int sum = ((str1[i]-'0')+(str2[i]-'0')+carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }
    for (int i=n1; i<n2; i++)
    {
        int sum = ((str2[i]-'0')+carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }
    if (carry)
        str.push_back(carry+'0');
    reverse(str.begin(), str.end());
    return str;
}
//////////////////////////////////////////////////////////
ll a[10000007],f[10000007];
int main()
{
    ls
    //freopen("ainnn.txt","r",stdin);
    //freopen("aoutt.txt","w",stdout);
 
    ll i,j;
    a[1]=0;
    for(i=2;i<=10000000;i++)
    {
        if(f[i]==0)
        {
            f[i]=i;
            for(j=i*i;j<=10000000;j+=i)
            {
                if(f[j]==0)
                    f[j]=f[i];
            }
        }
        a[i]=a[i-1]+f[i];
    }
    ll Tc;
    cin>>Tc;
    while(Tc--)
    {
        ll n;
        cin>>n;
        cout<<a[n]<<endl;
    }
    quit;
} 
