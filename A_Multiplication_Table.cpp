#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cout.tie(nullptr);            \
    cin.tie(nullptr);
#define precision cout << fixed << setprecision(12);
#define done cout << "Successful\n";
#define input(gggg, n)             \
    for (int xd = 0; xd < n; xd++) \
        cin >> gggg[xd];
#define print(x) cout << #x << " = " << x << "\n";
#define nl "\n"
#define sp " "

set<ll> s;

void solve()
{
    ll n, x;
    cin >> n >> x;
    if (x % 2 == 0)
    {
        for (ll i = 2; i <= n; i += 2)
        {
            if (x % i == 0)
            {
                ll mid = x / i;
                if (mid <= n)
                {
                    s.insert(mid);
                    s.insert(i);
                }
            }
        }
    }
    else
    {
        for (ll i = 1; i <= n; i += 2)
        {
            if (x % i == 0)
            {
                ll mid = x / i;
                if (mid <= n)
                {
                    s.insert(mid);
                    s.insert(i);
                }
            }
        }
    }

    cout << s.size() << nl;
}
int main()
{
    fast;
    // int t;
    // cin >> t;
    // while (t--)
    // {
    solve();
    // }
    return 0;
}
