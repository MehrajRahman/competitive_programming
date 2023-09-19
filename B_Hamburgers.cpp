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
    string a;
    cin >> a;
    ll b, s, c, bp, cp, ss, money, nb = 0, ns = 0, nc = 0;
    cin >> b >> s >> c;
    cin >> bp >> ss >> cp;
    cin >> money;

    REP(i, 0, a.size())
    {
        if (a[i] == 'B')
        {
            nb++;
        }
        else if (a[i] == 'S')
        {
            ns++;
        }
        else
        {
            nc++;
        }
    }

    ll maxi = max(max(b, s), c), ans = 0, cans = 0;

    while (((b > 0 && nb > 0) || (c > 0 && nc > 0) || (s > 0 && ns > 0)) && ans <= money)
    {
        if (b >= nb)
        {
            b -= nb;
        }
        else
        {
            ll bneed = nb - b;
            b = 0;
            ans += bneed * bp;
            if (ans > money)
                break;
        }

        if (c >= nc)
        {
            c -= nc;
        }
        else
        {
            ll cneed = nc - c;
            c = 0;
            ans += cneed * cp;
            if (ans > money)
                break;
        }

        if (s >= ns)
        {
            s -= ns;
        }
        else
        {
            ll sneed = ns - s;
            s = 0;
            ans += sneed * ss;
            if (ans > money)
                break;
        }

        cans++;

        if (cans == maxi)
            break;
    }

    // cout << cans << " " << ans << nl;
    ll percost = nb * bp + ns * ss + nc * cp;

    ll lo = 0, hi = 1000000000000, bsans = 0;
    while (lo <= hi)
    {
        ll mid = (lo + hi) / 2;
        ll cost = mid * percost;

        if ((cost + ans) <= money)
        {
            bsans = mid;
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
        // if (f(mid))
        //     hi = mid - 1;
        // else
        //     lo = mid + 1;
    }
    // while (lo < hi - 1)
    // {
    //     ll mid = lo + (hi - lo) / 2;
    //     ll cost = mid * percost;

    //     if ((cost + ans) <= money)
    //     {
    //         lo = mid;
    //     }
    //     else
    //     {
    //         hi = mid;
    //     }
    // }

    cout << bsans + cans << nl;
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
