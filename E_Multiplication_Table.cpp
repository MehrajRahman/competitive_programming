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

ll koto_tomo(ll x, ll n, ll m)
{
    ll s = 0;
    for (int i = 1; i <= n; ++i)
    {
        s += min((x) / i, m);
    }

    return s;
}

void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;

    ll lo = 1, hi = n * m, ans = 1;

    while (lo <= hi)
    {
        ll mid = lo + (hi - lo) / 2;
        ll s = koto_tomo(mid, n, m);
        // cout << mid << " s : " << s << nl;

        if (s == k)
        {
            if (mid % n == 0 || mid % m == 0)
            {
                ans = mid;
            }
            hi = mid - 1;
        }
        else if (s < k)
        {
            // if (mid % n == 0 || mid % m == 0)
            // {
            ans = mid + 1;
            // }
            // ans = mid + 1;
            lo = mid + 1;
        }

        else
            hi = mid - 1;
    }
    cout << ans << nl;
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
