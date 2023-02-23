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
    ll sum = 0, c = 0;
    int n, b, d;
    cin >> n >> b >> d;

    vector<int> v;

    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        if (x > b)
        {
            continue;
        }
        else
        {
            v.push_back(x);
            sum += x;
            if (sum > d)
            {
                c++;
                sum = 0;
            }
        }
    }

    cout << c << nl;
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
