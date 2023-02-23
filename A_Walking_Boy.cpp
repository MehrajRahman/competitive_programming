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
    ll n, c = 0;
    cin >> n;

    vector<int> s;
    set<int> v;
    v.insert(0);

    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        v.insert(x);
    }

    v.insert(1440);

    for (auto x : v)
    {
        s.push_back(x);
    }

    sort(s.begin(), s.end());

    for (int i = 1; i < s.size(); ++i)
    {
        if (s[i] - s[i - 1] >= 120)
        {
            int ratio = (s[i] - s[i - 1]) / 120;
            c += ratio;
            if (c >= 2)
            {
                cout << "YES" << nl;
                return;
            }
        }
    }
    cout << "NO" << nl;
}
int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
