#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pi;
typedef set<int> si;
typedef map<int, int> mi;
typedef map<char, int> mc;
typedef map<string, string> ms;

#define fast                      \
    ios_base::sync_with_stdio(0); \
    cout.tie(nullptr);            \
    cin.tie(nullptr);
#define input(gggg, n)             \
    for (int xd = 0; xd < n; xd++) \
        cin >> gggg[xd];
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define nl "\n"
#define sp " "
#define MAX 1e7
ll n = MAX;
vector<bool> prime(n + 1, true);

ll sq_rt(ll x)
{
    ll lo = 1, hi = 1e10;
    while (lo <= hi)
    {
        ll mid = (lo + hi) / 2ll;
        if (mid * mid == x)
            return mid;
        else if (mid * mid > x)
            hi = mid - 1ll;
        else
            lo = mid + 1ll;
    }
    assert(false);
}

void seiv()
{
    prime[0] = false;
    prime[1] = false;
    for (int i = 2; i * i <= n; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= n; j += i)
                prime[j] = false;
        }
    }
}

void solve()

{

    ll t;
    cin >> t;

    for (ll i = 0; i * i <= t; ++i)
    {
        if (prime[i])
        {
            if (t % i == 0)
            {
                ll psq = t / i;
                if (t % (i * i) == 0)
                {
                    cout << i << " " << (t / (i * i)) << nl;
                    return;
                }
                ll sq = sq_rt(psq);
                if (sq * sq == psq)
                {
                    cout << sq << ' ' << i << nl;
                    return;
                }
            }
        }
    }
}
int main()
{
    fast;
    seiv();
    int t;
    cin >> t;
    while (t--)
        solve();
    //    solve();
    return 0;
}