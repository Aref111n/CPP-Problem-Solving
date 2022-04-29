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
#define ptf(b) puts(b?"YES":"NO") //ptf=print true false
#define newline cout<<endl
#define quit return 0
 
using namespace std;
 
int abra_ka_dabra(int s)
{
 
}
 
int main()
{
    ls
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    //ll int t,l=1;cin>>t;while(t--){
        while(true){
        ll n;
        cin >> n ;
        if(n==0) break;
        ll i,p;
        bool b = true;
        vector<ll> v;
        stack<ll> st;
        for(i=0;i<n;i++)
        {
            cin>>p;
            v.push_back(p);
        }
        ll c=1;
        for(i=1;i<=n;i++)
        {
            if(v.front()==i)
                v.erase(v.begin());
            else if(st.size()>0 && st.top()==i)
                st.pop();
            else if(v.size()==0)
                break;
            else
            {
                while(v.size()!=0)
                {
                    st.push(v.front());
                    v.erase(v.begin());
                    if(v.front()==i)
                        break;
                }
                if(v.front()==i)
                    v.erase(v.begin());
            }
            if(v.size()==0 && st.size()==0)
                break;
        }
 
        if(v.size()==0 && st.size()==0)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
        }
    quit;
}
 
