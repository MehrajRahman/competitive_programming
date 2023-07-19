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
// bool comparefn(pair<ll, ll> a, pair<ll, ll> b)
// {
//     if (a.F == b.F)
//         return a.S < b.S;
//     else
//         return a.F > b.F;
//     // return false;
// }

// void solve()
// {
//     ll n, m, h, ans1, ans2;
//     cin >> n >> m >> h;
//     vector<vector<ll>> v(n);
//     vector<pair<ll, ll>> r;
//     REP(i, 0, n)
//     {
//         REP(j, 0, m)
//         {
//             ll x;
//             cin >> x;
//             v[i].PB(x);
//         }
//     }

//     REP(i, 0, n)
//     {
//         sort(v[i].begin(), v[i].end());
//         ll ps = 0, tt = 0, pen = 0;
//         // cout << v[i][0] << nl;
//         REP(j, 0, m)
//         {
//             tt += v[i][j];
//             if (tt <= h)
//             {
//                 ps++;
//                 pen += tt;
//                 if (j == m - 1)
//                 {
//                     r.PB(MP(ps, pen));
//                     // cout << r[i].F << "rrrr : " << r[i].S << nl;
//                     if (i == 0)
//                     {
//                         ans1 = ps;
//                         ans2 = pen;
//                     }
//                 }
//             }

//             else
//             {

//                 r.PB(MP(ps, pen));
//                 if (i == 0)
//                 {
//                     ans1 = ps;
//                     ans2 = pen;
//                 }
//                 // break;
//                 break;
//             }
//         }
//     }

//     // cout << "ans" << ans1 << " " << ans2 << nl;

//     sort(r.begin(), r.end(), comparefn);
//     ll kkk = 0;
//     REP(i, 0, r.size())
//     {
//         // cout << r[i].F << " " << r[i].S << nl;
//         if (r[i].F == ans1 && r[i].S == ans2)
//         {
//             kkk = i;
//             break;
//         }
//     }
//     cout << kkk + 1 << nl;
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

#define done cout << "Successful\n";
#define stop getchar();
#define input(data, n)             \
    for (int xd = 0; xd < n; xd++) \
        cin >> data[xd];
#define output(data)     \
    for (auto x : data)  \
    {                    \
        cout << x << sp; \
    }
#define print(x) cout << #x << " = " << x << "\n";
#include <iostream> // std::cout, std::fixed
#include <iomanip>  // std::setprecisio
#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define lli long long int
#define spc " ";
#define nl '\n'
#define all(v) v.begin(), v.end()

const int inf = 2147483647;

void solve()
{
    lli n, m, h;
    cin >> n >> m >> h;
    lli arr[n][m];

    for (int i = 0; i < n; i++)
    {
        vector<lli> v;
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            v.push_back(arr[i][j]);
        }

        sort(v.begin(), v.end());

        vector<lli> pref(m);
        for (int j = 0; j < m; j++)
        {
            if (j == 0)
            {
                pref[0] = v[0];
            }
            else
            {
                pref[j] = v[j] + pref[j - 1];
            }
        }
        for (int j = 0; j < m; j++)
        {
            arr[i][j] = pref[j];
        }
    }
    lli rd = 0;
    lli rd_pnts = 0;
    for (int j = 0; j < m; j++)
    {
        if (arr[0][j] <= h)
        {
            rd += 1;
            rd_pnts += arr[0][j];
        }
    }
    lli rd_pstn = 1;
    for (int i = 1; i < n; i++)
    {
        lli cnt = 0;
        lli pnts = 0;
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] <= h)
            {
                cnt += 1;
                pnts += arr[i][j];
            }
        }
        if (rd > cnt)
        {
        }
        else if (rd < cnt)
        {
            rd_pstn += 1;
        }
        else
        {
            if (rd_pnts > pnts)
            {
                rd_pstn += 1;
            }
        }
    }

    cout << rd_pstn << nl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
