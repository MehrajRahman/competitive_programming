#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef set<int> si;
typedef set<ll> sl;
typedef map<int, int> mi;
typedef map<char, int> mc;
#define lpr pair<long long int, long long int>

#define fast                      \
    ios_base::sync_with_stdio(0); \
    cout.tie(nullptr);            \
    cin.tie(nullptr);
#define input(gggg, n)             \
    for (int xd = 0; xd < n; xd++) \
        cin >> gggg[xd];
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define REPP(i, a, b) for (int i = a; i >= b; --i)
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define nl "\n"
#define sp " "

#define bg 1000000

vector<bool> is_prime(bg + 1, true);
vector<long long> is_prime_main;

void findPrime()
{
    is_prime[0] = is_prime[1] = false;

    for (ll i = 2; i * i <= bg; i++)
    {

        if (is_prime[i] && i * i <= bg)
        {

            for (ll j = i * i; j <= bg; j += i)
            {
                is_prime[j] = false;
            }
        }
    }
}
bool comparefn(lpr a, lpr b)
{
    if (a.S != b.S)
        return a.S < b.S;
    return false;
}

void solve()
{
    ll a, b, x, y, z;
    cin >> a >> b;

    if (b == 1)
    {
        cout << "NO" << nl;
    }
    else
        x = a * b;
    cout << "YES" << nl;
    cout << a << " " << x << " " << x + a << nl;
}
int main()
{
    fast;
    // findPrime();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    // solve();
    return 0;
}

// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);

//     int q;
//     cin >> q;

//     while (q--)
//     {
//         int a, b;
//         cin >> a >> b;
//         if (b == 1)
//         {
//             cout << "NO" << endl;
//         }
//         else
//         {
//             cout << "YES" << endl;
//             cout << a << ' ' << a * (long long)b << ' ' << a * (long long)(b + 1) << endl;
//         }
//     }
// }