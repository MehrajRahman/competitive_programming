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
    string a, t1, t2;
    cin >> n;
    cin >> a;
    REP(i, 0, n)
    {
        if (i % 2 == 0)
        {
            t1.PB('1');
            t2.PB('0');
        }
        else
        {
            t1.PB('0');
            t2.PB('1');
        }
    }

    REP(i, 0, n)
    {
        if (a[i] != '0' && a[i] != '1')
        {
            char c = a[i], d;
            if (i == 0)
            {
                a[i] = '0';
                d = '0';
            }
            else
            {
                if (a[i - 1] == '0')
                {
                    a[i] = '1';
                    d = '1';
                }
                else if (a[i - 1] == '1')
                {
                    a[i] = '0';
                    d = '0';
                }
                else
                {
                    a[i] = '0';
                    d = '0';
                }
            }

            REP(j, i + 1, n)
            {
                if (a[j] == c)
                {
                    a[j] = d;
                }
            }
        }
    }
    // cout << a << " " << t1 << " " << t2 << nl;

    if (a == t1 || a == t2)
    {
        cout << "YES" << nl;
    }
    else
    {
        cout << "NO" << nl;
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
