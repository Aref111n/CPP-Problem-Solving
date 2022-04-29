#include<stdio.h>

int main()
{
    int t,n,m,r,p,s=0;
    scanf("%d",&t);
    for(m=1;m<=t;m++)
    {
        scanf("%d",&n);
        for(p=1;p<=n;p++)
        {
            scanf("%d",&r);
            if(r>=1&&r<=100)
            {
                s=s+r;
            }
        }
        printf("Case %d: %d\n",m,s);
        s=0;
    }
    return 0;
}
