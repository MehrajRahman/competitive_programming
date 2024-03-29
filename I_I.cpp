#include <iostream>
#include <vector>
#include <map>
#include <set>

#include <algorithm>

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
    int n;
    cin >> n;
    vector<ll> v(n);

    REP(i, 0, n)
    {
        cin >> v[i];
    }

    si s[n];
    vector<ll> vv[n + 1];
    map<ll, ll> mm[n + 1];

    int k = 0;
    REPP(i, n - 1, 0)
    {
        if (i == n - 1)
        {
            s[0].insert(v[i]);
            vv[k].PB(v[i]);
            mm[k].insert(MP(v[i], 1));
        }
        else
        {
            s[0].insert(v[i]);
            vv[k].PB(v[i]);
            mm[k].insert(MP(v[i], 1));
            int c = 1;
            for (auto x : mm[k - 1])
            {
                int kk = __gcd(v[i], x.F);
                vv[k].PB(kk);
                mm[k].insert(MP(v[i], mm[k][v[i]]++));
                s[c].insert(kk);
                c++;
            }
        }
        k++;
    }

    REP(i, 0, n)
    {
        auto it = s[i].end();
        --it;
        cout << *it << " ";
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