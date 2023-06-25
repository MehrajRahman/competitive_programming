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
//     ll n, f = 0, t = 0, s = 0, j = 0;
//     cin >> n;
//     string a;
//     vi v;

//     REP(i, 0, n)
//     {
//         ll x;
//         cin >> x;
//         // cout << x << nl;
//         if (i == 0)
//         {
//             f = x;
//             a.PB('1');
//             v.PB(x);
//             j++;
//         }
//         else
//         {
//             if (t == 0 && x >= v[j - 1])
//             {
//                 a.PB('1');
//                 v.PB(x);
//                 j++;
//             }
//             else if (t == 0 && x < v[j - 1] && x > f)
//             {
//                 // cout << "entered " << x << nl;
//                 a.PB('0');
//             }
//             else if (t == 0 && x < v[j - 1] && x <= f)
//             {
//                 // cout << "entered  || " << x << nl;
//                 a.PB('1');
//                 v.PB(x);
//                 j++;
//                 s = x;
//                 t = 1;
//             }
//             else
//             {
//                 if (x >= s && x <= f)
//                 {
//                     a.PB('1');
//                     v.PB(x);
//                     j++;
//                     s = x;
//                 }
//                 else
//                 {
//                     a.PB('0');
//                 }
//             }
//         }
//         // cout << a << " " << s << " " << t << nl;
//     }

//     cout << a << nl;
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
#include <bits/stdc++.h>
#define ll long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
using namespace std;
int prime[1000000] = {0};
void seive()
{
    prime[0] = prime[1] = 1;
    for (int i = 2; i * i <= 1000000; i++)
    {
        if (!prime[i])
        {
            for (int j = i * i; j <= 1000000; j += i)
            {
                prime[j] = 1;
            }
        }
    }
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, l, f, flag = 0;
        cin >> n;
        string s;
        for (ll i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            if (!i)
            {
                l = a;
                f = a;
                s += '1';
            }
            else if (flag == 0 && a >= f && a >= l)
            {
                l = a;
                s += '1';
            }
            else if (flag == 0 && a <= f && a < l)
            {
                l = a;
                s += '1';
                flag = 1;
            }
            else if (flag && a <= f && a >= l)
            {
                l = a;
                s += '1';
            }
            else
            {
                s += '0';
            }
        }
        cout << s << endl;
    }
    return 0;
}
