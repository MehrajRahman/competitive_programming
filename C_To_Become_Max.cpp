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
    ll n, k, m = INT_MIN, mi;
    cin >> n >> k;
    vector<ll> v(n);

    REP(i, 0, n)
    {
        cin >> v[i];
        if (v[i] > m)
        {
            m = v[i];
            mi = i;
        }
    }
    ll c = 0, ans = v[mi];

    REPP(i, mi - 1, 0)
    {
        if (ans > v[i])
        {
            ll rr = ans - v[i];
            c += rr;
            c++;
            if (k >= c)
            {
                ans = ans + 1;
            }
        }
    }

    int cc = -1;
    ll ans2 = v[mi];

    REP(i, mi + 1, n - 1)
    {
        if (v[i] < v[mi] && v[i + 1] >= v[i - 1])
        {
            cc = i;
        }
    }
    int p = 0;
    REPP(i, cc , mi)
    {
        if (ans2 > v[i])
        {
            ll rr = ans2 - v[i];
            p += rr;
            p++;
            if (k >= p)
            {
                ans2 = ans2 + 1;
            }
            else
            {
                break;
            }
        }
    }
    cout << max(ans, ans2) << nl;
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
