#include<bits/stdc++.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

#define ls ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define quit return 0

using namespace std;
int main()
{
    ls
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int t,l=1;
    cin >> t ;
    while(t>0)
    {
        int m,n,c=0;
        cin >> m >> n ;
        if(m==1||n==1)
        {
            cout << "Case " << l << ": " << max(m,n) << endl ;
        }
        else if(m==2||n==2)
        {
            int p=2,q;
            if(m==2)
               q=n;
            else
                q=m;
            if(q%2==1)
                cout << "Case " << l << ": "<< q+1 << endl;
            else if((q/2)%2==0)
                cout << "Case " << l << ": "<< q << endl ;
            else
                cout << "Case " << l << ": "<< q+2 << endl ;


        }
        else{
        int p = max(m,n);
        int q = min(m,n);
        if(p%2==0)
        {
            p/=2;
            cout << "Case " << l << ": " << p*q << endl ;
        }
        else if(p%2==1)
        {
            p/=2;
            if(q%2==0)
            {
                q/=2;
                cout << "Case " << l << ": " << (p*q)+((p+1)*q) << endl ;
            }
            else
            {
                q/=2;
                cout << "Case " << l << ": " << (p*q)+((p+1)*(q+1)) << endl ;
            }
        }
        }

        t--;
        l++;
    }
    quit;
}
