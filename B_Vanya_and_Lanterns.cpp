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
    ll n, k;
    cin >> n >> k;

    vi v(n);
    vi r;

    REP(i, 0, n)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    REP(i, 0, n - 1)
    {
        int d = v[i + 1] - v[i];
        r.PB(d);
    }

    sort(r.begin(), r.end());

    if (n == 1)
    {
        if (v[0] < k - v[n - 1])
        {
            cout << fixed << setprecision(10) << k - v[n - 1] * 1.00 << nl;
        }
        else
        {
            cout << fixed << setprecision(10) << v[0] * 1.00 << nl;
        }
    }
    else
    {
        if (r[n - 2] * 1.00 / 2 < v[0])
        {
            if (v[0] < k - v[n - 1])
            {
                cout << fixed << setprecision(10) << k - v[n - 1] * 1.00 << nl;
            }
            else
            {
                cout << fixed << setprecision(10) << v[0] * 1.00 << nl;
            }
        }
        else if (r[n - 2] * 1.00 / 2 < k - v[n - 1])
        {
            if (v[0] < k - v[n - 1])
            {
                cout << fixed << setprecision(10) << k - v[n - 1] * 1.00 << nl;
            }
            else
            {
                cout << fixed << setprecision(10) << v[0] * 1.00 << nl;
            }
        }
        else
        {

            cout << fixed << setprecision(10) << r[n - 2] * 1.00 / 2 << nl;
        }
    }
}

int main()
{
    fast;
    // int t;
    // cin >> t;
    // while (t--)
    //     solve();
    solve();
    return 0;
}
