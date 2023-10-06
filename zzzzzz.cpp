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
const int N = 2e5 + 5;

vector<int> adj[N], tin(N), tout(N), visited_nodes, sz(N), h(N), dep(N), par(N);

bool is_anc(int u, int v)
{
    return tin[u] <= tin[v] and tout[v] <= tout[u];
}

void compress(vector<int> &a)
{
    auto b = a;
    sort(b.begin(), b.end());
    b.erase(unique(b.begin(), b.end()), b.end());
    for (auto &ai : a)
    {
        ai = lower_bound(b.begin(), b.end(), ai) - b.begin();
    }
}

void dfs(int u, int p)
{
    tin[u] = visited_nodes.size();
    visited_nodes.push_back(u);
    sz[u] = 1;
    h[u] = 0;
    for (auto v : adj[u])
    {
        if (v == p)
            continue;
        par[v] = u;
        dep[v] = dep[u] + 1;
        dfs(v, u);
        sz[u] += sz[v];
        h[u] = max(h[u], 1 + h[v]);
    }
    tout[u] = visited_nodes.size() - 1;
}

// const int N = 2e5+5, K = 20;

// vector<int> adj[N];
// int t, tin[N], tout[N], dep[N], par[N][K];

// // O(nlogn)
// void dfs(int u, int p) {
//   tin[u] = t++;
//   par[u][0] = p;
//   for (int k = 1; k < K; ++k) {
//     par[u][k] = par[par[u][k - 1]][k - 1];
//   }
//   for (auto v: adj[u]) {
//     if (v == p)  continue;
//     dep[v] = dep[u] + 1;
//     dfs(v, u);
//   }
//   tout[u] = t++;
// }

// // O(1)
// bool is_anc(int u, int v){
//   return tin[u] <= tin[v] and tout[u] >= tout[v];
// }

// // O(log(n))
// int lca(int u, int v){
//   if(is_anc(u, v))  return u;
//   for(int k = K - 1; k >= 0; k--){
//     if(!is_anc(par[u][k], v)) {
//       u = par[u][k];
//     }
//   }
//   return par[u][0];
// }

// // O(1)
// int dis(int u, int v) {
//   return dep[u] + dep[v] - 2 * dep[lca(u, v)];
// }

void solve()
{
    int n;
    cin >> n;

    for (int e = 0; e < n - 1; ++e)
    {
        int u, v;
        cin >> u >> v;
        u--, v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(0, -1);
    int c = 0;
    for (int i = 0; i < n; ++i)
    {
        if ((tout[i] - tin[i] + 1) % 2 == 0 && (n - (tout[i] - tin[i] + 1)) % 2 == 0)
        {
            c++;
        }
    }
    if (n & 1)
    {
        cout << -1 << nl;
    }
    else
    {
        cout << c - 1 << nl;
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
