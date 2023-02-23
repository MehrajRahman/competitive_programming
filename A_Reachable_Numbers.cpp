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
    ll n, c = 0;
    cin >> n;

    set<ll> s;
    s.insert(n);
    n += 1;
    while (n % 10 == 0)
    {
        n /= 10;
    }
    s.insert(n);

    while (n >= 1 && c < 2)
    {
        if (n == 1)
        {
            c++;
        }
        if (n % 10 == 0)
        {
            while (n % 10 == 0)
            {
                n /= 10;
            }
            s.insert(n);
        }
        else
        {
            n += 1;
            while (n % 10 == 0)
            {
                n /= 10;
            }
            s.insert(n);
        }
    }

    cout << s.size() << nl;
}

int main()
{

    fast;
    // int t;
    // cin>>t;
    // while(t--) solve();
    solve();
    return 0;
}
