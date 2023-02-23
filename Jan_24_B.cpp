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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int e = 0;

    if (a == 0)
    {
        cout << 1 << endl;
    }
    else if (b == 0 && c == 0 && d == 0)
    {
        cout << a << endl;
    }
    else
    {
        int mini = min(b, c);
        e += a;

        e += mini * 2;

        b -= mini;

        c -= mini;

        if (b + c + d <= a)
        {
            e += (b + c + d);
        }
        else
        {
            e += a + 1;
        }

        cout << e << endl;
    }
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
