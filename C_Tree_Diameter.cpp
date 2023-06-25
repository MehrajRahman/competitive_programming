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

vector<int> adj[3000000];
bool visited[3000000];

void initialize()
{
    for (int i = 0; i < 3000000; ++i)
        visited[i] = false;
}

void dfs(int s, int l, vector<pi> &d)
{
    visited[s] = true;

    for (int i = 0; i < adj[s].size(); ++i)
    {
        if (visited[adj[s][i]] == false)
        {
            d.PB({l + 1, adj[s][i]});
            dfs(adj[s][i], l + 1, d);
        }
    }
}

void solve()
{
    ll n;
    cin >> n;
    vector<pi> d, k;
    vi r(n + 5);

    REP(i, 0, n - 1)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    if (n == 1)
    {
        {
            cout << 0 << nl;
            return;
        }
    }

    initialize();
    ll l = 0;
    dfs(1, l, d);

    sort(d.begin(), d.end());
    int u = 1;
    if (d.size() > 0)
        u = d[d.size() - 1].second;
    d.clear();
    l = 0;
    initialize();
    d.PB({0, u});

    dfs(u, l, d);

    sort(d.begin(), d.end());
    u = 1;
    if (d.size() > 0)
        u = d[d.size() - 1].second;
    l = 0;
    initialize();
    k.PB({0, u});
    dfs(u, l, k);

    for (auto x : d)
    {
        r[x.S] = max(x.F, r[x.S]);
    }

    for (auto x : k)
    {
        r[x.S] = max(x.F, r[x.S]);
    }

    for (int i = 1; i <= n; ++i)
    {
        cout << r[i] << " ";
    }
}
int main()
{
    fast;
    // findPrime();
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     solve();
    // }
    solve();
    return 0;
}
