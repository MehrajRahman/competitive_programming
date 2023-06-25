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

ll sq_rt(ll x)
{
    ll lo = 1, hi = 1e10;
    while (lo <= hi)
    {
        ll mid = (lo + hi) / 2ll;
        if (mid * mid == x)
            return mid;
        else if (mid * mid > x)
            hi = mid - 1ll;
        else
            lo = mid + 1ll;
    }
    return (lo + hi) / 2ll;
}
void solve(ll n, ll xx)
{
    ll sum = 0;
    map<ll, ll> m;
    ll k = sq_rt(n);
    for (ll i = 2; i <= k; ++i)
    {
        ll kk = (n) / i;
        m[i] = kk - 1;
    }

    while (k)
    {
        if (k > 1)
        {
            ll i = n / (k + 1);
            ll e = n / k;
            ll s = e * (e + 1) / 2 - i * (i + 1) / 2;
            m[s] = k - 1;
        }
        k--;
    }
    ll ss = 0;
    for (auto x : m)
    {
        ll pp = x.F * x.S;
        ss += pp;
    }
    sum += ss;
    cout << "Case " << xx << ": " << sum << nl;
}
int main()
{
    fast;
    findPrime();
    ll t;
    cin >> t;
    ll x = 1;
    while (t)
    {

        solve(t, x);
        cin >> t;
        x++;
        // if (x > 5)
        //     break;
    }
    // solve();
    return 0;
}
