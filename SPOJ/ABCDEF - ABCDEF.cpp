#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
 
    ll n;
    scanf("%lld",&n);
    ll a[n+5],i,j,k,cnt=0;
    for(i=0; i<n; i++)
        scanf("%lld",&a[i]);
    vector<ll>v;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            for(k=0; k<n; k++)
            {
                v.push_back((a[i]*a[j])+a[k]);
            }
        }
    }
    sort(v.begin(),v.end());
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            for(k=0; k<n; k++)
            {
                if(lower_bound(v.begin(),v.end(),(a[i]+a[j])*a[k])!=v.end()&&a[k]!=0)
                {
                    ll hi=upper_bound(v.begin(),v.end(),(a[i]+a[j])*a[k])-v.begin();
                    ll lo=lower_bound(v.begin(),v.end(),(a[i]+a[j])*a[k])-v.begin();
                    cnt=cnt+(hi-lo);
                }
            }
        }
    }
 
 
    printf("%lld",cnt);
 
    return 0;
} 
