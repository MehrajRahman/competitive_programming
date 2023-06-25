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
vector<int> vv;

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
void insert()
{
    for (ll i = 2; i <= bg; i++)
    {
        if (is_prime[i])
        {
            vv.PB(i);
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
    int n;
    cin >> n;
    vi v(n);
    mi m;
    REP(i, 0, n)
    {
        cin >> v[i];
    }

    REP(i, 0, n)
    {
        for (int j = 0; j <= vv.size(); j++)
        {
            // cout << vv[j] << " " << v[j] << "for loop" << nl;
            if (vv[j] > v[i])
                break;
            if (v[i] % vv[j] == 0)
            {
                m[vv[j]]++;
            }
        }
    }
    ll ms = n * (n - 1) / 2;
    // cout << "ms : " << ms << nl;
    for (auto x : m)
    {
        if (x.F > 1)
        {
            ll s = x.S * (x.S - 1) / 2;
            ms -= s;
        }
    }
    cout << ms << nl;
}
int main()
{
    fast;
    findPrime();
    insert();
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     solve();
    // }
    solve();
    return 0;
}
