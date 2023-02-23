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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        // cout << v[i] << " ";
        if (v[i] != 0)
        {
            int cr = v[i];
            v[i] = 0;
            cnt++;
            for (int j = i + 1; j < n; j++)
            {
                if (v[j] > cr + 1)
                {
                    break;
                }
                if (v[j] == cr + 1)
                {
                    cr = v[j];
                    v[j] = 0;
                }
            }
        }
    }
    cout << cnt << endl;
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