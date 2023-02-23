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
    ll a, b, c, res;
    cin >> a >> b >> c;

    int mini = min(a, b);
    int maxi = max(a, b);
    if (mini == maxi)
    {
        res = mini * 2 + c * 2;
    }
    else
    {
        res = mini * 2 + c * 2 + 1;
    }

    cout << res << nl;
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
