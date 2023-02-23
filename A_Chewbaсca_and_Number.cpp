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
    string a;
    cin >> a;

    if (a[0] != '9' && a[0] > '4')
    {
        int d = a[0] - '0';
        d = 9 - d;
        a[0] = d + '0';
    }
    for (int i = 1; i < a.size(); ++i)
    {
        int d = a[i] - '0';
        if (d > 4)
        {
            d = 9 - d;
        }
        a[i] = d + '0';
    }
    cout << a << nl;
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
