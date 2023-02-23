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

    map<int, int> s;
    vector<int> r;

    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        s.insert(make_pair(x, i));
    }

    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        r.push_back(x);
    }

    for (int i = 0; i < r.size() - 1; ++i)
    {
        if (s[r[i]] > s[r[i + 1]])
        {
            c = i + 1;
        }
    }
    cout << c << nl;
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
