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

ll fact(ll n);

ll nCr(ll n, ll r)
{
    return fact(n) / (fact(r) * fact(n - r));
}

// Returns factorial of n
ll fact(ll n)
{
    if (n == 0)
        return 1;
    ll res = 1;
    for (ll i = 2; i <= n; i++)
        res = res * i;
    return res;
}

void solve()
{
    ll n;
    cin >> n;

    ll d = n / 2 + n % 2;
    ll nn = n / 2;
    ll sum = 0;

    while (nn--)
    {
        // cout << " d " << d << "nn" << nn + 1 << nl;

        sum += nCr(d, nn + 1);
        d++;
    }

    cout << sum + 1 << nl;
}

int main()
{
    fast;
    int t;

    solve();
    return 0;
}
