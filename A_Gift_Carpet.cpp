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
    int n, m;

    cin >> n >> m;
    vector<string> v(n);
    string b = "vika";

    REP(i, 0, n)
    {
        string a;
        cin >> a;
        v[i] = a;
    }
    int j = 0;
    // REP(i, 0, n)
    // {
    //     REP(k, 0, m)
    //     {
    //         if (v[i][k] == b[j])
    //         {
    //             j++;
    //         }
    //         if (j == 4)
    //         {
    //             cout << "YES" << nl;
    //             return;
    //         }
    //     }

    //     j = 0;
    // }

    REP(i, 0, m)
    {
        REP(k, 0, n)
        {
            if (v[k][i] == b[j])
            {
                j++;
                if (j == 4)
                {
                    cout << "YES" << nl;
                    return;
                }
                break;
            }
        }

        // j = 0;
    }

    cout << "NO" << nl;
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
