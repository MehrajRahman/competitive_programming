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
    string a, b, c, d;
    cin >> c >> d;
    cout << " ee" << nl;
    int l = c.size();
    int io = -1, oo = -1;
    a = c;
    b = d;

    REP(i, 0, l - 1)
    {
        REP(j, i + 1, l)
        {
            if (a[i] == b[i] && a[j] == b[j] && a[i] == a[j])
            {
                REP(k, i + 1, j + 1)
                {

                    a[k] = a[i];
                    b[k] = a[i];
                }
            }
        }
    }

    REPP(i, l - 1, 1)
    {
        REPP(j, i - 1, 0)
        {
            cout << " ee" << nl;
            if (c[i] == d[i] && c[j] == d[j] && c[i] == c[j])
            {
                cout << " ee" << nl;
                REPP(k, i - 1, j - 1)
                {

                    c[k] = c[i];
                    d[k] = c[i];
                }
            }
        }
    }
    cout << c << " " << d << nl;

    if (c == d || a == b)
    {
        cout << "YES" << nl;
    }
    else
    {
        cout << "NO" << nl;
    }
}
int main()
{
    fast;
    // findPrime();
    int t;
    cout << "ee" << nl;
    cin >> t;
    while (t--)
    {
        solve();
    }
    // solve();
    return 0;
}
