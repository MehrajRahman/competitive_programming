#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef set<int> si;
typedef map<int, int> mi;
typedef map<char, int> mc;

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

void solve()
{
    int n, c = 0;
    unsigned long long m = 1, tp = 1, f = 1;
    cin >> n;

    vi v;
    vi r;
    REP(i, 0, n)
    {
        int x;
        cin >> x;
        v.PB(x);
    }

    REP(i, 0, n)
    {
        int m = v[i];
        while (m % 2 == 0)
        {
            c++;
            m /= 2;
        }
    }
    if (c >= n)
    {
        cout << 0 << nl;
        return;
    }
    int k = 0;
    REP(i, 2, n + 1)
    {
        int m = i, k = 0;
        while (m % 2 == 0)
        {
            k++;
            m /= 2;
        }
        if (k > 0)
        {
            r.PB(k);
        }
    }
    sort(r.begin(), r.end());
    reverse(r.begin(), r.end());
    int re = n - c, l = 0, ans = 0;
    REP(i, 0, r.size())
    {
        l += r[i];
        ans++;
        if (l >= re)
        {
            cout << ans << nl;
            return;
        }
    }
    if (l < re)
    {
        cout << -1 << nl;
        return;
    }
    else
    {
        cout << ans << nl;
        return;
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
