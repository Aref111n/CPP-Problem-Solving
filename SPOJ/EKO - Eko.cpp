#include<bits/stdc++.h>
#define FastRead                      \
                                    ios_base::sync_with_stdio(false); \
                                    cin.tie(0);
#define ll long long
#define endl "\n"
#define f for
using namespace std;
int main()
{
    FastRead
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ll int n,m,i;
    cin>>n>>m;
    ll int a[n+5],s=0,store,c;
    f(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    if(n==1)
        cout<<a[0]-m<<endl;
    else{
    sort(a,a+n);
    reverse(a,a+n);
    f(i=0; i<n-1; i++)
    {
        store=a[i]-a[i+1];
        //s=s+store*(i+1);
        //cout<<s<<endl;
        if(m-(store*(i+1))<0)
        {
            c=i+1;
            break;
        }
        else
        {
            a[0]=a[0]-store;
            m=m-store*(i+1);
        }
        //cout<<m<<endl;
 
    }
    if(m>0)
    {
        //cout<<c<<" "<<m<<endl;
        if(m%c==0)
            m=m/c;
        else
            m=(m/c)+1;
        a[0]=a[0]-m;
    }
    cout<<a[0];
    }
    return 0;
}
 
