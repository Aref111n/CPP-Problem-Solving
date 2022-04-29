#include<bits/stdc++.h>

using namespace std;
int main()
{
    long long int n,i,j,t,m=1;
    cin >> t;
    while(t>0)
    {
    cin >> n ;
    if(n%2==1)
    {
        cout <<"Case " << m << ": " << "Impossible" << endl;
    }
    else if(n%2==0)
    {
        for(i=2;i<=n/2;i+=2)
            {
            if((n/i)%2==1 && (n/i)*i==n)
            {
                cout <<"Case " << m << ": " << n/i << " " << i ;
                cout  << endl ;
                goto next;
            }
        }
    }
next:
    m++;
    t--;
    }
    return 0;
}
