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
    int n;
    cin >> n;
    vi v(n);
    REP(i, 0, n)
    {
        cin >> v[i];
    }
    int c = 0;
    REP(i, 1, n)
    {
        if (v[i] < v[i - 1])
        {
            c = -1;
        }
    }

    int d = 0;
    REPP(i, n - 1, 1)
    {
        if (v[i] > v[i - 1])
        {
            d = -1;
        }
    }

    if (c == 0)
    {
        cout << 0 << nl;
        return;
    }
    if (d == 0)
    {
        cout << 0 << nl;
        return;
    }

    REP(i, 0, n)
    {
        int f = 0;
        int d = n - i;
        if (d % 2 == 1)
            d = d / 2 + 1;
        else
            d = d / 2;
        REP(j, i + 1, i + d)
        {
            if (v[j - 1] > v[j])
            {
                f = -1;
                break;
            }
        }
        REPP(j, n - 2, n - d)
        {
            if (v[j] < v[j + 1])
            {
                f = -1;
                break;
            }
        }

        if (n - i == 2)
        {
            f = 0;
        }

        if (f == 0)
        {

            cout << i << nl;
            break;
        }
    }
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
