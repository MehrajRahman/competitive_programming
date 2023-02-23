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

    int n, h, m;
    cin >> n >> h >> m;

    vector<int> v;

    for (int i = 0; i < n; ++i)
    {
        int hh, mm;
        cin >> hh >> mm;
        v.push_back(hh * 60 + mm);
    }
    int mini = 100000, test = h * 60 + m;
    for (int i = 0; i < n; ++i)
    {
        int diff = v[i] - test;

        diff >= 0 ? mini = min(mini, diff) : mini = min(mini, 24 * 60 - diff * (-1));
    }

    cout << mini / 60 << " " << mini % 60 << nl;
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
