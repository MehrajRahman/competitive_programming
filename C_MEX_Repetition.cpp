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

void solve()
{
    int n, k;
    cin >> n >> k;
    vi v(n), p(n);
    REP(i, 0, n)
    {
        cin >> v[i];
        p[i] = v[i];
    }

    sort(p.begin(), p.end());

    vi ms;

    int c = 0, fm = -1;
    REP(i, 0, n)
    {
        if (p[i] != c && c <= n)
        {
            if (fm == -1)
                fm = c;
            ms.PB(c);
            break;
        }
        c++;
    }

    vi anss;

    REP(i, 0, n)
    {
        if (v[i] <= n)
        {
            anss.PB(v[i]);
        }
    }
    int q = 0;
    REP(i, anss.size(), n)
    {

        anss.PB(ms[q++]);
    }
    // cout << "size" << anss.size() << nl;
    ll shft = k % (n + 1), ans;
    ans = min(shft, n + 1 - shft);
    vi r(n);
    if (ans != 0 && ans == shft)
    {
        REP(i, ans, n)
        {
            r[i] = anss[i - ans];
        }

        REP(i, 0, ans - 1)
        {
            r[i] = anss[n - i - 1];
        }
        // cout << "ans" << ans << " " << fm << nl;
        r[ans - 1] = fm;
    }
    else
    {
        REPP(i, n - 1, ans)
        {
            r[i - ans] = anss[i];
        }

        REPP(i, n - 1, n - ans)
        {
            r[i] = anss[i - ans - 1];
        }

        r[n - ans] = fm;
    }

    REP(i, 0, n)
    {
        cout << r[i] << " ";
    }
    cout << nl;
}
int main()
{
    fast;
    // findPrime();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    // solve();
    return 0;
}
