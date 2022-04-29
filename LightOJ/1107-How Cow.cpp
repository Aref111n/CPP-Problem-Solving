//BISMILLAHIR RAHMANIR RAHIM
//SOTO MEAW
#include<bits/stdc++.h>

#define ls ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define __ <<" "<<
#define quit return 0

using namespace std;
void showmyDS(set<char> ds)
{
    set<char>::iterator it;
    for (it=ds.begin();it!=ds.end();it++)
    {
        cout << *it ;
    }
    cout << endl;
}
int main()
{
    ls
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    //int t;cin>>t;while(t>0){
        ll int t,j,x,y,x1,y1;
    cin>>t;
    for(j=0; j<t; j++)
    {
        cin>>x>>y>>x1>>y1;
        cout<<"Case "<<j+1<<":\n";
        ll int n,a,b,i;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a>>b;
            if((a>=x && a<=x1) &&(b>=y && b<=y1))
                cout<<"Yes\n";
            else
                cout<<"No\n";
        }
    }
    //t--;}
    quit;
}
