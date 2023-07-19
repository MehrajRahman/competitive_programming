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
    int n, k = 0;
    cin >> n;
    vector<ll> v(n + 7);
    REP(i, 0, n)
    {
        cin >> v[i];
        // s.insert(x);
    }
    // set<ll> s{v[n - 1]}, r{v[n - 1]}, t;

    // for (int i = n - 1;i > 0;--i) {
    //     if (v[i] <= 4000000) {
    //         s.insert(v[i]);
    //     }
    //     for (auto k : r) {
    //         int t = lcm(k, v[i]);
    //         if (t <= 4000000) {
    //             s.insert(t);
    //         }
    //     }
    //     r.clear();
    //     for (auto k : s) {
    //         s.insert(k);
    //         r.insert(k);
    //     }
    //     tmp.clear();
    // }

    set<ll> s, lc, tmp;

    for (int i = n - 1; i >= 0; --i)
    {
        if (i == n - 1)
        {
            s.insert(v[i]);
            lc.insert(v[i]);
        }
        if (v[i] <= 5000000)
        {
            tmp.insert(v[i]);
        }
        for (auto k : lc)
        {
            int t = lcm(k, v[i]);
            if (t <= 5000000)
            {
                tmp.insert(t);
            }
        }
        lc.clear();
        for (auto k : tmp)
        {
            s.insert(k);
            lc.insert(k);
        }
        tmp.clear();
    }

    // auto it = v.end();
    // --it;

    // r[0].insert(*it);
    // s.insert(*it);
    // for (it; it != v.begin(); --it)
    // {
    //     if (*it <= 40000)
    //     {
    //         k++;

    //         r[k].insert(*it);
    //         s.insert(*it);
    //         for (auto x : r[k - 1])
    //         {
    //             ll lc = lcm(*it, x);
    //             r[k].insert(lc);
    //             s.insert(lc);
    //         }
    //     }
    // }
    // // cout << *it << nl;
    // if (it == v.begin())
    // {
    //     for (auto x : r[k])
    //     {
    //         ll lc = lcm(*it, x);
    //         // r[k].insert(lc);
    //         s.insert(lc);
    //     }
    // }

    int ans = 1;
    for (; s.count(ans); ans++)
        ;
    cout << ans << nl;
}

// REPP(i, n - 1, 0)
// {
//     if (i == n - 1)
//     {

//         r[i].insert(v[i]);
//         s.insert(v[i]);
//     }
//     else
//     {
//         r[i].insert(v[i]);
//         s.insert(v[i]);
//         for (auto x : r[i + 1])
//         {
//             ll lc = lcm(v[i], x);
//             r[i].insert(lc);
//             s.insert(lc);
//         }
//     }
// }
// }
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
