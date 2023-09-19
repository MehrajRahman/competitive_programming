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

bool cp(pi a, pi b)
{
    // if (a.S != b.S)
    return a.F < b.F;
    // return false;
}

void solve()
{
    int n;
    cin >> n;
    vector<pi> v;

    REP(i, 1, n + 1)
    {
        int x;
        cin >> x;
        v.PB(MP(x, i));
    }

    sort(v.begin(), v.end(), cp);
    // for (auto x : v)
    // {
    //     cout << x.F << " " << x.S << nl;
    // }
    // cout << "r " << nl;

    vector<pi> r;
    int k = n;
    REP(i, 0, n)
    {

        r.PB({v[i].S, k});
        k--;
    }

    // for (auto x : r)
    // {
    //     cout << x.F << " " << x.S << nl;
    // }

    sort(r.begin(), r.end());

    REP(i, 0, n)
    {

        cout << r[i].S << " ";
    }
    cout << nl;
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
