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
    int a, b, c;

    cin >> a >> b >> c;

    if (a == 1 && b == 1 && c == 1)
    {
        cout << a + b + c << endl;
    }
    else if (a == 1 || b == 1 || c == 1)
    {
        int r1 = (a + b) * c;
        int r2 = a * (b + c);
        int r3 = a + b + c;
        int max;

        r1 >= r2 ? max = r1 : max = r2;
        max >= r3 ? cout << max << endl : cout << r3 << endl;
    }
    else
    {
        cout << a * b * c << endl;
    }
}
int main()
{
    fast;
    solve();
    return 0;
}
