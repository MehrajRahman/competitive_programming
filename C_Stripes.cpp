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
    vector<string> v;
    for (int i = 0; i < 8; ++i)
    {
        string a;
        cin >> a;
        v.push_back(a);
    }

    int vs = 0, rs = 0;
    for (int i = 7; i >= 0; --i)
    {
        // cout << v[i][0];
        char test = 'R';
        for (int j = 0; j < 8; ++j)
        {
            if (test != v[i][j] || test == '.')
            {
                vs = 1;
                break;
            }
        }
        if (vs == 0)
        {
            cout << test << nl;
            return;
        }
        vs = 0;

        char test2 = 'B';

        for (int j = 7; j >= 0; --j)
        {
            // cout << v[j][i] << " ";
            if (test2 != v[j][i] || test2 == '.')
            {
                rs = 1;
                break;
            }
        }

        if (rs == 0)
        {
            cout << test2 << nl;
            return;
        }
        rs = 0;
    }
}

int main()
{

    fast;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
