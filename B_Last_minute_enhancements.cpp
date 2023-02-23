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
    ll n, c = 0;
    cin >> n;
    vector<int> v;
    set<int> s;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < n; ++i)
    {
        if (s.count(v[i]))
        {
            s.insert(v[i] + 1);
        }
        else
        {
            s.insert(v[i]);
        }
    }

    cout << s.size() << endl;
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
