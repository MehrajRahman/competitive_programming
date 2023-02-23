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

void solve()
{
    ll n, m;
    int cc = 0;
    ll sum = 0;
    cin >> n >> m;

    vector<string> v;

    vector<int> p;

    map<char, int> mm;
    for (int i = 0; i < n; ++i)
    {
        string x;
        cin >> x;

        v.push_back(x);
    }

    for (int i = 0; i < m; ++i)
    {
        int x;
        cin >> x;
        p.push_back(x);
    }

    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            mm[v[j][i]] = mm[v[j][i]] + 1;
            if (cc < mm[v[j][i]])
            {
                cc = mm[v[j][i]];
            }
        }

        sum += cc * p[i];

        mm.clear();
        cc = 0;
    }

    cout << sum << nl;
}

int main()
{

    fast;
    // int t;
    // cin>>t;
    // while(t--) solve();
    solve();
    return 0;
}
