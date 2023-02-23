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
    ll s, n;
    int flag = 0;
    cin >> s >> n;

    vector<pair<int, int>> v;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++)
    {
        if (v[i].first >= s)
        {
            cout << "NO" << endl;
            flag = 1;
            break;
        }
        else
        {
            s += v[i].second;
        }
    }

    if (!flag)
    {
        cout << "YES" << endl;
    }
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
