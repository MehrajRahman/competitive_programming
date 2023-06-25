#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef set<int> si;
typedef map<int, int> mi;
typedef map<char, int> mc;

#define fast                      \
    ios_base::sync_with_stdio(0); \
    cout.tie(nullptr);            \
    cin.tie(nullptr);
#define input(gggg, n)             \
    for (int xd = 0; xd < n; xd++) \
        cin >> gggg[xd];
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define nl "\n"
#define sp " "

ll sq_rt(ll x)
{
    ll lo = 1, hi = 1e10;
    while (lo <= hi)
    {
        ll mid = (lo + hi) / 2ll;
        if (mid * mid == x)
            return mid;
        else if (mid * mid > x)
            hi = mid - 1ll;
        else
            lo = mid + 1ll;
    }
    assert(false);
}

void solve()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    if (d < b)
    {
        cout << -1 << nl;
    }
    else if (d == b)
    {
        if (a < c)
        {
            cout << -1 << nl;
        }
        else
        {
            cout << a - c << nl;
        }
    }
    else
    {
        a += (d - b);
        if (a < c)
        {
            cout << -1 << nl;
        }
        else
        {
            cout << a - c + d - b << nl;
        }
    }
}

int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
        solve();
    // solve();
    return 0;
}
