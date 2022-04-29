#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
vector<pair<ll, ll> > adj[100005] ;
vector<pair<ll, ll> >::iterator it;
ll cnt[100005] ;
 
int bfs(ll s, ll d)
{
    queue<ll>q;
    q.push(s);
    cnt[s] = 0;
 
    while(q.size()!=0)
    {
        int u = q.front();
        q.pop();
 
        for(it = adj[u].begin() ; it!= adj[u].end() ; it++)
        {
            if(cnt[it->first] > cnt[u] + it->second)
            {
                cnt[it->first] = cnt[u] + it->second ;
                q.push(it->first);
            }
        }
    }
 
    return cnt[d];
}
int main()
{
    ll tc , l;
    cin >> tc;
    for(l = 0 ; l < tc ; l++)
    {
        ll n, m, s, d;
        cin >> n >> m >> s >> d;
 
        for(int i=0; i<=n; i++)
        {
            cnt[i] = INT_MAX ;
        }
 
        for(int i=0; i<m; i++)
        {
            ll a, b, c;
            cin >> a >> b >> c;
 
            adj[a].push_back({b, c});
            adj[b].push_back({a, c});
        }
 
        ll k = bfs(s, d);
        if(k == INT_MAX)
            cout << "NONE" << endl ;
        else
            cout << k << endl ;
 
        memset(adj, 0, sizeof adj) ;
    }
    return 0;
}
