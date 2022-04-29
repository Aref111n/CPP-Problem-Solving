//BISMILLAHIR RAHMANIR RAHIM
//INNALLAHA_MA_AS_SABIRIN
#include<bits/stdc++.h>

#define      __                 <<" "<<
#define      loop(m,n)          for(m=0;m<n;m++)
#define      loop1(m,n)         for(m=1;m<=n;m++)
#define      rloop(m,n)         for(m=n-1;m>=0;m--)
#define      PTF(b)             puts(b?"YES":"NO")
#define      Ptf(b)             puts(b?"Yes":"No")
#define      ptf(b)             puts(b?"yes":"no")
#define      newline            cout<<endl
#define      quit               return 0


using namespace std;

//typedefs
typedef long long ll;


//Solve here...
vector<ll> adj[20005];
ll color[20005];
bool vis[20005];

ll bfs(ll s)
{
    queue<ll> q;
    q.push(s);
    color[s] = 1;
    vis[s] = 1;
    ll x = 1, y = 0;

    while(q.size() != 0)
    {
        ll p = q.front() ;
        q.pop();
        vector<ll>::iterator it;

        for(it=adj[p].begin(); it!=adj[p].end(); it++)
        {
            if(vis[*it] == 0)
            {
                q.push(*it);
                vis[*it] = 1;
                if(color[p]==1)
                {
                    color[*it] = 2;
                    y++;
                }
                else
                {
                    color[*it] = 1;
                    x++;
                }
            }
        }
    }

    return max(x, y);

}

int main()
{
    
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif


    int i,j;

    ll tc; cin >> tc ;
    ll l = 1;

    while(tc--)
    {
        memset(adj, 0, sizeof(adj));
        memset(color, 0, sizeof(color));
        memset(vis, 0, sizeof(vis));
        ll n;
        cin >> n ;

        set<ll> s;

        loop(i, n)
        {
            ll a, b;
            cin >> a >> b ;

            adj[a].push_back(b);
            adj[b].push_back(a);

            s.insert(a);
            s.insert(b);
        }

        set<ll>::iterator it;

        ll sum = 0;
        for(it=s.begin(); it!=s.end(); it++)
        {
            if(vis[*it]==0)
            {
                sum += bfs(*it);
            }
        }

        cout << "Case " << l++ << ": " << sum << endl;
    }

    quit;
}
