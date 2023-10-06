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

bool check(vector<ll> v, ll m)
{
    ll c = 0, ct = 0, cm = 0;
    REP(i, 0, v.size())
    {
        if (v[i] > 1 && i >= ct)
        {
            ct = ct + i + v[i] - 1;

            cm = v[i];
        }
        else if (v[i] != 1)
        {
            if (cm < v[i])
            {
                cm = cm + v[i] - cm;
            }
        }
        else if (v[i] == 1)
        {
            c++;
        }
    }
    if (c >= m)
    {
        return true;
    }
    else
        return false;
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    REP(i, 0, n)
    cin >> v[i];
    sort(v.begin(), v.end());

    ll lo = 0, hi = n;

    while (lo < hi)
    {
        ll mid = lo + (hi - lo) / 2;
        if (check(v, mid))
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid;
        }
    }

    cout << lo << nl;
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
