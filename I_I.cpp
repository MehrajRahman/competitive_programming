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
    int n;
    cin >> n;
    vector<ll> v(n);

    REP(i, 0, n)
    {
        cin >> v[i];
    }

    si s[n];
    set<ll> ss[n + 1];

    int k = 0;
    REPP(i, n - 1, 0)
    {
        if (i == n - 1)
        {
            s[0].insert(v[i]);
            ss[k].insert(v[i]);
        }
        else
        {
            s[0].insert(v[i]);
            ss[k].insert(v[i]);
            int c = 1;
            cout << "SS size: " << ss[k - 1].size() << nl;

            for (auto x : ss[k - 1])
            {
                int kk = __gcd(v[i], x);

                ss[k].insert(kk);
                s[i].insert(kk);
                c++;
            }
        }
        k++;
    }

    REP(i, 0, n)
    {
        auto it = s[i].end();
        // --it;
        // cout << *it << " ";
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

// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// typedef vector<int> vi;
// typedef pair<int, int> pi;
// typedef set<int> si;
// typedef set<ll> sl;
// typedef map<int, int> mi;
// typedef map<char, int> mc;
// #define lpr pair<long long int, long long int>

// #define fast                      \
//     ios_base::sync_with_stdio(0); \
//     cout.tie(nullptr);            \
//     cin.tie(nullptr);
// #define input(gggg, n)             \
//     for (int xd = 0; xd < n; xd++) \
//         cin >> gggg[xd];
// #define REP(i, a, b) for (int i = a; i < b; ++i)
// #define REPP(i, a, b) for (int i = a; i >= b; --i)
// #define F first
// #define S second
// #define PB push_back
// #define MP make_pair
// #define nl "\n"
// #define sp " "

// #define bg 1000000

// vector<bool> is_prime(bg + 1, true);
// vector<long long> is_prime_main;

// void findPrime()
// {
//     is_prime[0] = is_prime[1] = false;

//     for (ll i = 2; i * i <= bg; i++)
//     {

//         if (is_prime[i] && i * i <= bg)
//         {

//             for (ll j = i * i; j <= bg; j += i)
//             {
//                 is_prime[j] = false;
//             }
//         }
//     }
// }
// bool comparefn(lpr a, lpr b)
// {
//     if (a.S != b.S)
//         return a.S < b.S;
//     return false;
// }

// void solve()
// {
//     int n;
//     cin >> n;
//     vector<ll> v(n);
//     // mi m;

//     REP(i, 0, n)
//     {
//         cin >> v[i];
//     }

//     si s[n];
//     vector<map<ll, ll>> m;
//     map<ll, ll> mm, rm;
//     vector<ll> vv[n + 1];
//     vector<ll> tr;

//     int k = 0;
//     REPP(i, n - 1, 0)
//     {
//         if (i == n - 1)
//         {
//             s[0].insert(v[i]);
//             // tr.PB(v[i]);
//             vv[k].PB(v[i]);
//             mm[v[i]]++;
//             m.PB(mm);
//             mm.clear();
//         }
//         else
//         {
//             s[0].insert(v[i]);
//             vv[k].PB(v[i]);
//             mm[v[i]]++;
//             int c = 1;
//             for (auto x : vv[k - 1])
//             {
//                 int kk = __gcd(v[i], x);
//                 vv[k].PB(kk);
//                 s[c].insert(kk);
//                 c++;

//                 // if (!mm.count(kk))
//                 // {
//                 //     mm[kk] = m[k - 1][x];
//                 // }
//                 // else
//                 // {
//                 //     mm[kk] += m[k - 1][x];
//                 // }
//             }
//             // m.PB(mm);
//             // mm.clear();
//         }
//         k++;
//     }
//     // cout << "Case : " << n << nl;

//     // for (int i = 0; i < k; ++i)
//     // {
//     //     for (auto x : vv[i])
//     //     {
//     //         cout << x << " ";
//     //     }
//     //     cout << nl;
//     // }

//     REP(i, 0, n)
//     {
//         auto it = s[i].end();
//         --it;
//         cout << *it << " ";
//     }
//     cout << nl;

//     // REP(i, 0, q)
//     // {
//     //     // for (auto x : m[i])
//     //     // {
//     //     //     rm[x.F] += x.S;
//     //     // }
//     //     cout << rm[r[i]] << nl;
//     // }
// }
// int main()
// {
//     fast;
//     // findPrime();
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     // solve();
//     return 0;
// }
