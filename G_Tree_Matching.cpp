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
vector<vector<int>> vv(3e5);
bool vis[300000];
int ans = 0;
void initialize()
{
    for (int i = 0; i < 300000; ++i)
        vis[i] = false;
}
void dfs(int x, int y)
{
    for (auto i : vv[x])
    {
        if (i != y)
        {
            dfs(i, x);
            if (!vis[i] && !vis[x])
                ans++, vis[i] = 1, vis[x] = 1;
        }
    }
}

void solve()
{
    int n;
    cin >> n;

    REP(i, 0, n - 1)
    {
        int x, y;
        cin >> x >> y;
        vv[x].PB(y);
        vv[y].PB(x);
    }
    initialize();
    dfs(1, 0);
    cout << ans << nl;
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