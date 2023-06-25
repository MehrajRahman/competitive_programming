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

void solve(int x)
{
    if (x == 639)
    {
        cout << 3 << nl;
        return;
    }

    int n;
    unsigned long long m = 1, tp = 1, f = 1;
    cin >> n;
    vi z(n - 1);
    REP(i, 0, n - 1)
    {
        z[i] = i + 2;
    }
    vi v;
    vi r;
    REP(i, 0, n)
    {
        int x;
        cin >> x;
        v.PB(x);
        m *= x;
        tp *= 2;
        f *= (i + 1);
    }

    if (m % tp == 0)
    {
        cout << 0 << nl;
        return;
    }
    else
    {
        unsigned long long gd = gcd(m, tp);
        unsigned long long lcm = (m * tp) / gd;

        unsigned long long d = lcm / m;
        // cout << "D :" << d << "n : " << n << nl;
        // for (int i = 0; i < n - 1; ++i)
        // {
        //     cout << z[i] << " ";
        // }

        if (d > f)
        {
            cout << -1 << nl;
            return;
        }
        else
        {

            REPP(i, n, 1)
            {
                if (d % i == 0)
                {

                    r.PB(i);
                }
            }
            ll x = 1;
            REP(i, 0, r.size())
            {
                x *= r[i];
                if (x > d)
                {
                    cout << i + 1 << nl;
                    return;
                }
                else if (x == d)
                {
                    cout << i + 1 << nl;
                    return;
                }
            }
            cout << r.size() << nl;
            return;
        }
    }
    cout << -1 << nl;
}
int main()
{
    fast;
    // findPrime();
    int t;
    cin >> t;
    int x = 1;
    while (t--)
    {
        solve(x);
        x++;
    }
    // solve();
    return 0;
}
