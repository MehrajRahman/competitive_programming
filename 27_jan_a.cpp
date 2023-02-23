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

#define bg 10000000
vector<bool> t(bg + 7);

// void prime()
// {
//     t[0] = t[1] = false;
//     for (ll i = 2; i <= bg; i++)
//     {
//         t[i] = true;
//     }
//     for (ll i = 2; i * i <= bg; i++)
//     {
//         if (t[i])
//         {
//             for (ll j = i * i; j <= bg; j += i)
//             {
//                 t[j] = false;
//             }
//         }
//     }
// }
void solve()
{
    string a = "314159265358979323846264338327";
    string b;
    cin >> b;
    int l = b.size();

    int cnt = 0;

    for (int i = 0; i < l; i++)
    {
        if (b[i] == a[i])
        {
            cnt++;
        }
        else
        {
            break;
        }
    }

    cout << cnt << endl;
}

int main()
{
    fast;
    // prime();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
