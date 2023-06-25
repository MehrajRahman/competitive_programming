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

#define bg 9000001

vector<bool> is_prime(bg + 1, true);
vector<long long> is_prime_main;
vector<ll> p;

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
void insertPrime()
{
    for (ll i = 2; i <= bg; i++)
    {

        if (is_prime[i] == true)
        {
            p.PB(i);
        }
    }
}

bool comparefn(lpr a, lpr b)
{
    if (a.S != b.S)
        return a.S < b.S;
    return false;
}

const int MAX = 3e5 + 10;
vector<vi> v(MAX);
vector<int> vis(MAX);
int k = 1;

void dfs(int u, int c, vector<pair<ll, ll>> &r)
{
    vis[u] = 1;

    for (int i = 0; i < v[u].size(); ++i)
    {
        if (vis[v[u][i]] == 1)
            continue;
        k += v[u].size();
        r.PB({c + 1, v[u][i]});
        dfs(v[u][i], c + 1, r);
    }
}

void initialize()
{
    for (int i = 0; i < MAX; ++i)
    {
        vis[i] = 0;
    }
}

void solve()
{
    ll x, n, c = 0;
    cin >> x >> n;
    vector<pair<ll, ll>> r;
    REP(i, 0, MAX)
    {
        v[i].clear();
    }

    REP(i, 0, n)
    {
        int x, y;
        cin >> x >> y;
        v[x].PB(y);
        v[y].PB(x);
    }

    if (n == 0)
    {
        cout << -1 << nl;
        return;
    }
    initialize();
    vis[1] = 1;
    r.PB({0, 1});
    for (int i = 1; i <= x; ++i)
    {
        if (vis[i] == 1)
            continue;
        r.PB({c, i});
        dfs(i, c, r);
    }
    sort(r.begin(), r.end());
    int uu = 0;
    if (r.size() > 0)
    {
        uu = r[r.size() - 1].S;
    }

    initialize();
    vis[uu] = 1;
    r.clear();
    r.PB({0, uu});
    dfs(uu, 0, r);
    sort(r.begin(), r.end());
    if (r.size() > 0)
    {
        uu = r[r.size() - 1].F;
    }
    if (uu < 0)
        uu = 0;

    cout << p[uu] << nl;
}
int main()
{
    fast;
    findPrime();
    insertPrime();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    // cout << p.size() << nl;
    return 0;
}
