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
    int n, k;
    cin >> n >> k;
    vi v(n), q(k);
    REP(i, 0, n)
    {
        cin >> v[i];
    }
    REP(i, 0, k)
    {
        cin >> q[i];
    }

    REP(i, 0, k)
    {
        int x = q[i];
        int l = 0, r = n - 1;
        int f = 0;
        while (l <= r)
        {
            int m = l + (r - l) / 2;
            // cout << m << " " << v[m] << nl;
            if (v[m] == x)
            {
                cout << "YES" << nl;
                f = 1;
                break;
            }
            else if (v[m] > x)
            {
                r = m - 1;
            }
            else
            {
                l = m + 1;
            }
        }
        if (f == 0)
            cout << "NO" << nl;
    }
}
int main()
{
    fast;
    // findPrime();
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     solve();
    // }
    solve();
    return 0;
}
