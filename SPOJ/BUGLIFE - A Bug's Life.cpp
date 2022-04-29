#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
vector<ll> adj[2005];
ll vis[2005];
ll col[2005];
 
bool dfs(int s, int c)
{
    vis[s] = 1;
    col[s] = c;
 
    vector<ll>::iterator it;
    for(it=adj[s].begin(); it!=adj[s].end(); it++)
    {
        if(vis[*it]==0)
        {
            if(dfs(*it, 1-c)==false)
                return false;
        }
        else if(col[s]==col[*it])
            return false;
    }
    return true;
}
 
int main()
{
    ll tc, t;
    cin >> tc ;
    for(int t=1; t<=tc; t++)
    {
        ll n, m;
        cin >> n >> m ;
 
        for(int i=0; i<m; i++)
        {
            int a, b;
            cin >> a >> b ;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
 
        ll p = 1;
 
        for(int i=1; i<=n; i++)
        {
            if(vis[i]==0)
            {
                p = dfs(i, 0);
            }
            if(p==0)
                break;
        }
 
        if(p==1)
        {
            cout << "Scenario #" << t << ":" << endl << "No suspicious bugs found!" << endl;
        }
        else
        {
            cout << "Scenario #" << t << ":" << endl << "Suspicious bugs found!" << endl;
        }
 
        memset(adj, 0, sizeof adj);
        memset(col, 0, sizeof col);
        memset(vis, 0, sizeof vis);
    }
 
    return 0;
}
