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

bool check(ll m, ll k, ll n)
{
    ll s = 0, c = 0, i = 2;
    REP(j, 0, m)
    {
        cout << "S: " << s << " " << s + i << nl;
        if (s + i - 1 <= n && i <= k)
        {
            s += i;
            if (j > 0)
                s--;

            i++;
        }
        else
        {
            break;
        }
    }

    cout << s << " s || n " << n << nl;

    if (s == n)
        return true;
    else

        return false;
}

void solve()
{
    ll n, k;
    cin >> n >> k;

    ll lo = 1, hi = k;
    while (lo < hi)
    {
        ll mid = lo + (hi - lo) / 2;

        if (check(mid, k, n))
        {
            cout << "mid : " << mid << " " << nl;
            hi = mid;
        }
        else
        {
            lo = mid + 1;
        }
    }
    cout << lo << nl;
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
