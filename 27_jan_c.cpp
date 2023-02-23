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
    int n;
    cin >> n;
    set<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.insert(x);
    }
    int cnt = 0;
    set<int>::iterator itr;
    set<int>::iterator itr2;
    int d = ceil((n * 1.00) / v.size());
    for (itr = v.begin(); itr != v.end();)
    {

        int x = *itr;
        itr++;
        int y = *itr;
        if (x != y - 1)
        {
            cnt++;
        }
    }
    cout << cnt * d << endl;
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