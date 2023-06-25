#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef set<int> si;
typedef set<ll> sl;
typedef map<int, int> mi;
typedef map<char, int> mc;
#define lpr pair<long long int, long long int>

#define fast                      \
    ios_base::sync_with_stdio(0); \
    cout.tie(nullptr);            \
    cin.tie(nullptr);
#define input(gggg, n)             \
    for (int xd = 0; xd < n; xd++) \
        cin >> gggg[xd];
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define REPP(i, a, b) for (int i = a; i >= b; --i)
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define nl "\n"
#define sp " "

#define bg 1000000

vector<bool> is_prime(bg + 1, true);
vector<long long> is_prime_main;

void findPrime()
{
    is_prime[0] = is_prime[1] = false;

    for (ll i = 2; i * i <= bg; i++)
    {

        if (is_prime[i] && i * i <= bg)
        {

            for (ll j = i * i; j <= bg; j += i)
            {
                is_prime[j] = false;
            }
        }
    }
}

bool comparefn(lpr a, lpr b)
{
    if (a.S != b.S)
        return a.S < b.S;
    return false;
}

const int MAX = 1e5 + 10;
vector<vector<pi>> v(MAX);
vector<int> vis(MAX);
vector<pair<ll, ll>> cc;

void dfs(ll u, ll c, ll m, vector<pair<ll, ll>> &r)
{
    vis[u] = 1;
    // cc.PB({v[u][i].F, m + v[u][i].S});
    for (int i = 0; i < v[u].size(); ++i)
    {
        if (vis[v[u][i].F] == 1)
            continue;
        cc.PB({v[u][i].F, m + v[u][i].S});
        r.PB({c + 1, v[u][i].F});
        dfs(v[u][i].F, c + 1, m + v[u][i].S, r);
    }
}

void initialize()
{
    for (int i = 0; i < MAX; ++i)
    {
        vis[i] = 0;
    }
}

void solve(int x)
{
    cc.clear();
    ll n, c = 1;
    cin >> n;
    REP(i, 0, n + 10)
    {
        v[i].clear();
    }
    vector<pair<ll, ll>> r;

    REP(i, 0, n - 1)
    {
        int x, y, c;
        cin >> x >> y >> c;
        v[x].PB({y, c});
        v[y].PB({x, c});
    }
    initialize();
    vis[0] = 1;
    r.PB({0, 0});
    dfs(0, 0, 0, r);

    sort(cc.begin(), cc.end());
    ll uu = 0;

    if (cc.size() > 0)
    {
        uu = cc[cc.size() - 1].F;
    }
    r.clear();
    cc.clear();
    initialize();
    vis[uu] = 1;
    r.PB({0, uu});
    // cout << "DFS 2 start :" << nl;
    dfs(uu, 0, 0, r);
    // cout << "DFS 2 END :" << nl;
    // ll e = 0, o = 0;
    // cout << uu << nl;
    sort(r.begin(), r.end());
    ll kk = r[r.size() - 1].S;
    // cc.PB({uu, cc[kk + 1].S});
    sort(cc.begin(), cc.end());
    ll v = -1;
    for (auto x : cc)
    {
        if (v < x.S)
        {
            v = x.S;
        }
    }
    cc.PB({uu, v});
    sort(cc.begin(), cc.end());
    cout << "Case " << x << ":" << nl;

    // cout << cc.size() << nl;
    for (auto x : cc)
    {
        cout << x.S << nl;
    }
    // cout << uu << nl << nl << nl;

    // cout << o * e - n + 1 << nl;
}
int main()
{
    fast;
    // findPrime();
    int t;
    cin >> t;
    int x = 1;
    while (t--)
    {

        solve(x);
        x++;
    }
    // solve();
    return 0;
}
