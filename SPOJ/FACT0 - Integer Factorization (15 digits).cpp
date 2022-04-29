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
#define test_inp() ll Tc,l=1;cin>>Tc;while(Tc--)
#define sf(T) scanf("%lld",&T)
#define pf(T) printf("%lld\n",T)
#define ptf(b) puts(b?"Yes":"No")
#define newline cout<<endl
#define quit return 0
using namespace std;
vector<ll>prime;
ll N=1000;
bool sieve[1000]={0};
void p_sieve()
{
    ll i;
    sieve[0]=sieve[1]=1;
    prime.push_back(2);
    for(i=4;i<N;i+=2)
        sieve[i]=1;
    ll sq=sqrt(N);
    for(i=3;i<sq;i+=2)
    {
        if(sieve[i]==0)
        {
            for(ll j=i*i;j<=N;j+=2*i)
                sieve[j]=1;
        }
    }
    for(i=3;i<=N;i+=2)
    {
        if(sieve[i]==0)
            prime.push_back(i);
    }
 
}
vector<ll>factor;
void factorize(long long n)
{
    int count = 0;
    while ((n % 2)!=1) {
        n/=2;
        count++;
    }
 
    if (count!=0)
        cout << 2 << "^" << count << " " ;
 
    for (long long i = 3; i <= sqrt(n); i += 2) {
        count = 0;
        while (n % i == 0) {
            count++;
            n = n / i;
        }
        if (count!=0)
            cout << i << "^" << count << " " ;
    }
    if (n > 2)
        cout << n << "^" << 1 <<  " " ;
}
int main()
{
    ls
    //freopen("ainnn.txt","r",stdin);
    //freopen("aoutt.txt","w",stdout);
    //test_inp(){}
    while(1){
        ll n;
        sf(n);
        if(n==0)
            break;
        factorize(n);
        newline;
    }
    quit;
} 
