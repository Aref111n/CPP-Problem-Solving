//BISMILLAHIR RAHMANIR RAHIM
//SOTO MEAW
//SOTO SONDESH
#include<bits/stdc++.h>
 
#define ls ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define __ <<" "<<
#define loop(m,n) for(m=0;m<n;m++)
#define rloop(m,n) for(m=n-1;m>=0;m--)
#define case(z) "Case " << z++ << ": "
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define newline cout<<endl
#define quit return 0
 
using namespace std;
 
bool isprime(int n)
{
    for (int i = 2; i <= n/2; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
 
void showmyDS(set<int> ds)
{
    set<int> ::iterator it;
    for (it=ds.begin(); it!=ds.end(); it++)
    {
        cout << *it << endl ;
    }
    cout << endl;
}
int main()
{
    ls
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ll int t,l=1;cin>>t;while(t>0){
        string ss;
        cin >> ss ;
        stack<char> s;
        int i;
        loop(i,ss.size())
        {
            int p = (int)ss[i];
            if(p>=97 && p<=122)
                cout << ss[i];
            else if(ss[i]==')')
            {
                if(s.top()=='(')
                {
                    goto last;
                }
                else
                {
                    cout << s.top() ;
                    s.pop();
                    s.pop();
                }
 
            }
            else
            {
                s.push(ss[i]);
            }
        }
last:
    newline;
    t--;}
    quit;
}
