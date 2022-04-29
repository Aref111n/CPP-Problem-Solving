#include<stdio.h>
#include<math.h>
#define pi 2*acos(0.0)

int main()
{
    int m,n;
    double r,c,s,a;
    scanf("%d",&n);
    for(m=1; m<=n; m++)
    {
        scanf("%lf",&r);
        c=pi*r*r;
        s=4*r*r;
        a=(s-c)+(pow(10,-9));
        printf("Case %d: %0.2lf\n",m,a);
    }
    return 0;
}
