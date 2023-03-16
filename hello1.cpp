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
typedef pair<int, int> PII;

void solve()
{

    // long long n, k, v, t = 0;
    // cin >> n >> k;
    // vector<ll> mm;
    // map<ll, ll> m;
    // vector<ll> c;
    // vector<ll> h;

    // map<ll, ll>::iterator it;
    // for (int i = 0; i < n; ++i)
    // {
    //     cin >> v;
    //     m[v]++;
    // }

    // for (int i = 0; i < k; ++i)
    // {
    //     cin >> v;
    //     c.push_back(v);
    // }
    // for (int i = 0; i < k; ++i)
    // {
    //     cin >> v;
    //     h.push_back(v);
    // }

    // // sort(c.begin(), c.end());
    // sort(h.begin(), h.end());

    // int ind = 0;
    // // cout << "m.size " << m.size() << endl;

    // for (int i = 0; i < m.size(); ++i)
    // {
    //     t += c[ind];
    //     ind++;
    //     if (ind == k)
    //     {
    //         ind = 0;
    //     }
    // }

    // // for (it = m.begin(); it != m.end(); it++)
    // // {

    // //     t += c[(*it).first];
    // // }

    // if (ind == n)
    // {
    // }
    // else
    // {
    //     ind = 0;

    //     for (it = m.begin(); it != m.end(); it++)
    //     {
    //         // for (int i = 0; i < (*it).second - 1; ++i)
    //         // {
    //         //     t += h[i];
    //         // }
    //         int d = (*it).second - 2;
    //         while (d >= 0)
    //         {
    //             t += h[ind];
    //             ind++;
    //             if (ind == k)
    //             {
    //                 ind = 0;
    //             }
    //             d--;
    //         }
    //     }
    // }

    // cout << t << endl;

    ll n, k, min;
    cin >> n >> k;
    ll arr[n];
    map<int, int> cold;
    map<int, int> hot;
    for (ll i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    for (ll i = 1; i <= k; i++)
    {
        ll x;
        cin >> x;
        cold[i] = x;
    }
    for (ll i = 1; i <= k; i++)
    {
        ll x;
        cin >> x;
        if (i == 1)
        {
            min = x;
        }
        else
        {
            if (min > x)
            {
                min = x;
            }
        }
        hot[i] = x;
    }
    ll sum = 0, f1 = 0, f2 = 0;
    for (ll i = 1; i <= n; i++)
    {
        if (i > 1)
        {
            if (f1 == arr[i])
            {
                sum += hot[arr[i]];
                // sum += min;
            }
            else if (f2 == arr[i])
            {
                sum += hot[arr[i]];
                f1 = arr[i];
                // sum += min;
            }
            else
            {
                sum += cold[arr[i]];
                f2 = arr[i];
                // f1 = arr[i];
            }
        }
        else
        {
            sum += cold[arr[i]];
            f1 = arr[i];
        }
    }
    cout << sum << endl;
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
