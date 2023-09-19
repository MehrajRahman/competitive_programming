// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef set<int> si;
typedef set<ll> sl;
// typedef map<int, int> mi;
// typedef map<char, int> mc;
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
ll t;
vector<ll> g;

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
    return true;
}

bool cmpr2(lpr a, lpr b)
{
    return a.F < b.F;
}

bool calc(ll x)
{
    long long time = 0, dis, ex;

    for (int i = 0; i + 1 < g.size(); i++)
    {
        dis = g[i + 1] - g[i];
        ex = min(dis, x - dis);

        if (ex < 0)
        {
            return false;
        }
        else
            time += (dis - ex) * 2 + ex;
    }

    return time <= t;

    // ll time = 0;
    // REP(i, 1, g.size())
    // {
    //     if ((g[i] - g[i - 1]) <= mid / 2)
    //     {
    //         time += (g[i] - g[i - 1]);
    //     }
    //     else if ((g[i] - g[i - 1]) > mid)
    //     {
    //         return INT64_MAX;
    //     }
    //     else
    //     {
    //         if ((g[i] - g[i - 1]) == mid)
    //         {
    //             time += (g[i] - g[i - 1]) * 2;
    //         }
    //         else
    //         {
    //             ll two = min(mid - (g[i] - g[i - 1]) + min((g[i] - g[i - 1]), mid - (g[i] - g[i - 1])), mid);
    //             ll one = mid - two;

    //             ll tt = two + one * 2;
    //             time += tt;
    //         }
    //     }
    // }

    // return time;
}

void solve()
{
    ll n, k, s;
    cin >> n >> k >> s >> t;
    vector<lpr> v;

    // vector<ll> g(k + 1);
    g.resize(k + 1);

    REP(i, 0, n)
    {
        ll ci, vi;
        cin >> ci >> vi;
        v.PB({ci, vi});
    }
    g[0] = 0;
    g.PB(s);
    REP(i, 1, k + 1)
    {
        cin >> g[i];
    }

    sort(g.begin(), g.end());

    // sort(v.begin(), v.end(), comparefn);

    ll lo = 0, hi = INT32_MAX, ans = INT64_MAX, ans2 = 0;

    while (lo <= hi)
    {

        ll mid = lo + (hi - lo) / 2;

        if (calc(mid))
        {
            hi = mid - 1;
        }
        else
        {
            // ans = min(ans, v[mid].F);

            // cout << mid << " " << ans << " " << v[mid].F << " " << time << nl;
            // ans2 = mid;

            lo = mid + 1;
        }
    }

    // ll ans = INT64_MAX;

    for (int i = 0; i < v.size(); ++i)
    {
        if (v[i].S >= lo)
        {
            ans = min(ans, v[i].F);
        }
    }

    // lo = 0, hi = ans2 + 1;
    if (ans == INT64_MAX)
    {
        cout << -1 << nl;
    }
    else
        cout << ans << nl;
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
