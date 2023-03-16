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

// #define bg 1e9

// vector<bool> is_prime(bg + 1, true);
// vector<long long> is_prime_main;

// void findPrime()
// {
//     is_prime[0] = is_prime[1] = false;
//     ll c = 0;
//     for (ll i = 2; i * i <= bg; i++)
//     {

//         if (is_prime[i] && (long long)i * i <= bg)
//         {

//             for (ll j = i * i; j <= bg; j += i)
//                 is_prime[j] = false;
//         }
//     }
// }

void solve()
{
    int n, l;
    cin >> n >> l;
    string a;
    cin >> a;
    map<char, int> m;
    // vector<char, int> v;
    for (int i = 0; i < n; ++i)
    {
        if (m.count(a[i]) > 0)
        {
            m[a[i]]++;
        }
        else
        {
            m[a[i]] = 0;
        }
    }

    // for (auto &x : m)
    // {
    //     cout << x.first << " " << x.second << endl;
    // }
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
