#include<stdio.h>

int main()
{
    int n,m;
    long long int a,b,c,p,q,r;
    scanf("%d",&n);
    for(m=1; m<=n; m++)
    {

        scanf("%lld %lld %lld",&a,&b,&c);
        if(a>b&&a>c)
        {
            if(b>c)
            {
                p=a;
                q=b;
                r=c;
            }
            else
            {
                p=a;
                q=c;
                r=b;
            }
        }
        else if(b>c)
        {
            if(a>c)
            {
                p=b;
                q=a;
                r=c;
            }
            else
            {
                p=b;
                q=c;
                r=a;
            }
        }
        else
        {
            if(a>b)
            {
                p=c;
                q=a;
                r=b;
            }
            else
            {
                p=c;
                q=b;
                r=a;
            }
        }
        if(((q*q)+(r*r))==(p*p))
        {
            printf("Case %d: yes\n",m);
        }
        else
        {
            printf("Case %d: no\n",m);
        }
    }
    return 0;
}
