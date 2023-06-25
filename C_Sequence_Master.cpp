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
    ll n;
    cin >> n;

    mi m;
    vi v;
    si s;

    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        m[x]++;
        v.PB(x);
        s.insert(x);
    }

    sort(v.begin(), v.end());

    if (v[0] == 0)
    {
        if (m[0] > (n - m[0]) + 1)
        {
            int j = m[0];
            if (v[n - 1] > 1)
            {
                cout << 1 << nl;
            }
            else if (v[n - 1] == 0)
            {
                cout << 1 << nl;
            }
            else
            {
                cout << 2 << nl;
            }
        }
        else
        {
            cout << 0 << nl;
        }
    }
    else
    {
        cout << 0 << nl;
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
