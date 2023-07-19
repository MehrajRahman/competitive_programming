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
const int N = 3e5 + 100;

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

int a[N], l, r;
ll ps[N], ng[N], mx = -1e18;
map<int, vi> mp;
void solve()
{
    int n;
    cin >> n;
    REP(i, 1, n + 1)
    {
        cin >> a[i];
        mp[a[i]].PB(i);
    }

    REP(i, 1, n + 1)
    {
        ps[i] = ps[i - 1];
        ng[i] = ng[i - 1];
        if (a[i] > 0)
        {
            ps[i] += a[i];
        }
        else
        {
            ng[i] += a[i];
        }
    }

    for (auto k : mp)
    {
        if (k.S.size() > 1)
        {
            int p = k.S[0];
            int q = k.S.back();
            ll cost = ps[q] - ps[p - 1] + (k.F < 0 ? 2 * k.F : 0);
            if (cost > mx)
            {
                mx = cost;
                l = p, r = q;
            }
        }
    }

    int ans = l - 1 + n - r;
    REP(i, l + 1, r)
    {
        if (a[i] < 0)
            ans++;
    }
    cout << mx << ' ' << ans << nl;
    REP(i, 1, l)
    {
        cout << i << " ";
    }
    REP(i, l + 1, r)
    {
        if (a[i] < 0)
            cout << i << " ";
        
    }
    REP(i, r + 1, n + 1)
    {
        cout << i << " ";
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
