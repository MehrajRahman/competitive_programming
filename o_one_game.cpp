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
    int l = a.size();
    int co = 0, c1 = 0;
    for (int i = 0; i < l; i++)
    {
        if ((a[i] == '0'))
        {
            co++;
        }
        else
        {
            c1++;
        }
    }
    int mi = min(co, c1);

    if (mi % 2 == 1 && mi > 0)
    {
        cout << "DA" << endl;
    }
    else
    {
        cout << "NET" << endl;
    }
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
