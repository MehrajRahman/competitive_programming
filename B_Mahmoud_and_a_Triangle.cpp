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
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;

        v.push_back(x);
    }

    sort(v.begin(), v.end());
    for (int i = 0; i < n - 2; ++i)
    {
        int d = v[i] + v[i + 1];
        if (v[i + 2] < d)
        {
            cout << "YES" << nl;
            return;
        }
    }
    cout << "NO" << nl;
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
