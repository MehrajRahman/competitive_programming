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
    vi v(n), r;

    REP(i, 0, n)
    {
        cin >> v[i];
    }
    cout << "R" << nl;
    REP(i, 1, n)
    {
        r.PB(abs(v[i] - v[i - 1]));
        cout << r[i - 1] << " ";
    }
    cout << nl;

    ll s = n - k + 1, ans = INT_MAX;
    // if()
    int pp = k - 1;
    // if (n % k == 0)
    //     pp--;
    cout << "s:" << s << nl;
    while (s >= 2 && pp)
    {

        ll ss = 0, c = 0, cans = 0;
        vi p;
        REP(i, 0, r.size())
        {
            c++;
            ss += r[i];
            if (c == s - 1)
            {
                p.PB(ss);
                cout << "ss: " << ss << nl;
            }
            else if (c > s - 1)
            {
                ss -= r[c - s];
                p.PB(ss);
                cout << "ss: " << ss << nl;
            }
        }

        sort(p.begin(), p.end());

        ll tt = (k - pp);

        cout << "s: " << s << " "
             << "c: " << c << " "
             << "pp: " << pp << " "
             << "TT: " << tt << nl;

        REP(i, 0, tt)
        {
            cans += p[i];
        }
        ans = min(ans, cans);
        cout << "cans: " << cans << nl;
        pp--;
        s--;
    }
    cout << ans << nl;
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
