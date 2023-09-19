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
    ll b, s, c, pb, pc, ps, money, bn = 0, cn = 0, sn = 0;
    cin >> b >> s >> c;
    cin >> pb >> ps >> pc;
    cin >> money;

    ll lo = 0, hi = 1000000000000 + 100;

    REP(i, 0, a.size())
    {
        if (a[i] == 'B')
        {
            bn++;
        }
        else if (a[i] == 'C')
        {
            cn++;
        }
        else
        {
            sn++;
        }
    }

    // f(x) = max(0, cb·x - nb)·pb + max(0, cs·x - ns)·ps + max(0, cc·x - nc)·pc
    ll cans = 0;
    while (lo <= hi)
    {
        ll mid = lo + (hi - lo) / 2;
        ll ans = max(0ll, bn * mid - b) * pb + max(0ll, cn * mid - c) * pc + max(0ll, sn * mid - s) * ps;
        // cout << ans << nl;
        if (ans <= money)
        {
            cans = mid;
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }

    cout << cans << nl;
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
