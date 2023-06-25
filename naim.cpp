//|ADMIRAL AUDITORE|//
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"
#define lp(i, a, n) for (ll i = a; i < n; i++)
#define rlp(i, n, l) for (ll i = n; i >= l; i--)
#define alg(v) sort(v.begin(), v.end())
#define rev(v) reverse(v.begin(), v.end())
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define F first
#define S second
#define vi vector<int>
#define pb push_back
#define setint set<int>

const int N = 3e5 + 10;
vector<int> graph[N];
bool vis[N];
void flush()
{
    for (int i = 0; i < N; i++)
        vis[i] = false;
}
void dfs(ll node, ll l, vector<pair<int, int>> &len)
{
    vis[node] = true;
    lp(i, 0, graph[node].size())
    {
        if (vis[graph[node][i]] == true)
            continue;
        len.push_back({l + 1, graph[node][i]});
        dfs(graph[node][i], l + 1, len);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    if (n == 1)
    {
        cout << 0 << nl;
        return 0;
    }
    vector<pair<int, int>> len;
    vi mlen(n + 1, 0);
    ll v1, v2;
    lp(i, 0, n - 1)
    {
        cin >> v1 >> v2;
        graph[v1].pb(v2);
        graph[v2].pb(v1);
    }
    flush();
    if (n == 1)
    {
        cout << 0 << nl;
        return 0;
    }
    int s = 0;
    dfs(1, s, len);
    alg(len);
    int node1 = 1;
    if (len.size() > 0)
        node1 = len[len.size() - 1].S;
    len.clear();
    flush();
    len.pb({0, node1});
    s = 0;
    dfs(node1, s, len);
    alg(len);
    int node2 = 1;
    if (len.size() > 0)
        node2 = len[len.size() - 1].S;
    vector<pair<int, int>> len_n2;
    s = 0;
    flush();
    len_n2.pb({0, node2});
    dfs(node2, s, len_n2);
    alg(len_n2);

    for (auto x : len)
    {
        mlen[x.S] = max(x.F, mlen[x.S]);
    }

    for (auto x : len_n2)
        mlen[x.S] = max(x.F, mlen[x.S]);

    for (int i = 1; i <= n; ++i)
        cout << mlen[i] << " ";
}