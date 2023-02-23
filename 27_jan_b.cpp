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
    int n, s, r;
    cin >> n >> s >> r;
    int max = s - r;
    int div = r / (n - 1);
    vector<int> v(n);
    v[0] = max;

    int sum = max;
    for (int i = 1; i <= (n - 1); i++)
    {

        if (i == n - 1 && i == 1)
        {
            v[i] = s - sum;
        }
        else if (i == n - 1)
        {
            v[i] = s - sum;
        }
        else
        {

            v[i] = div;
            sum += div;
        }
    }
    int max2 = v[n - 1];
    if (v[n - 1] > max)
    {
        int dif = max2 - max;
        v[n - 1] = v[n - 1] - dif;
        for (int i = n - 2; i >= 1; i--)
        {
            if (dif == 0)
            {
                break;
            }
            else
            {
                v[i] = v[i] + 1;
                dif--;
            }
        }
    }

    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
    cout << endl;
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
