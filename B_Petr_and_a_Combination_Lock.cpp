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
#define pb push_back

void solve()
{
    int t, sum = 0;
    cin >> t;

    vector<int> v;

    for (int i = 0; i < t; ++i)
    {
        int x;
        cin >> x;
        sum += x;
        v.pb(x);
    }
    v.sort(v.begin(), v.end());
}

int main()
{

    fast;
    // int t;
    // cin >> t;
    // while (t--)
    solve();
    return 0;
}
