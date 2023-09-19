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
    int n, f = 0, rr = 0;
    cin >> n;

    vi v(n);
    vector<pi> k;
    vi ans;
    REP(i, 0, n)
    {
        cin >> v[i];
        if (v[i] > n)
            f = 1;
        if (v[i] == n)
        {
            rr = 1;
        }
    }

    // if(v[0])

    if (f == 1 || rr == 0)
    {
        cout << "NO" << nl;
        return;
    }

    int j = 1, s = 0;
    REPP(i, n - 1, 0)
    {
        j++;
        if (i == n - 1)
        {
            k.PB({i + 1, v[i]});
            s += v[i];
        }
        else
        {
            k.PB({i + 1, v[i] - v[i + 1]});
            s += v[i] - v[i + 1];
        }
    }
    int jj = 0;

    for (auto x : k)
    {

        if (x.S != 0)
        {
            int kk = x.S;
            while (kk--)
            {
                if (x.F != v[jj])
                {
                    jj++;
                    f == 1;
                    break;
                }
                else
                {
                    jj++;
                }
                if (f == 1)
                {
                    cout << "NO" << nl;
                    return;
                }
            }
        }
    }

    if (f == 1 || jj < n)
    {
        cout << "NO" << nl;
    }
    else
    {
        cout << "YES" << nl;
    }

    cout << s << nl;
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
