#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
vector<ll> adj[40005];
ll vis[40005];
ll cnt=0, cyc = 0;
 
void dfs(int s)
{
    vis[s] = 1;
    cnt++;
 
    for(int i=0; i<adj[s].size(); i++)
    {
        if(vis[adj[s][i]]==1)
        {
            cyc = 1;
            break;
        }
        if(vis[adj[s][i]]==0)
        {
            dfs(adj[s][i]);
        }
    }
}
 
int main()
{
    ll n, m;
    cin >> n >> m ;
 
    for(int i=0; i<m; i++)
    {
    	int a, b;
    	cin >> a >> b ;
    	adj[a].push_back(b);
    }
 
    dfs(1);
 
    if(cnt==n && m==n-1 && cyc==0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
 
    return 0;
}
 
