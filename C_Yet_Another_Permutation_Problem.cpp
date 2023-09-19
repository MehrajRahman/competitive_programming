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

// #define bg 100000

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

//     for (ll i = 2; i <= bg; i++)
//     {
//         if (is_prime[i])
//             is_prime_main.PB(i);
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
//     ll n;
//     cin >> n;

//     si s;

//     cout << 1 << " ";
//     s.insert(1);

//     REP(i, 0, is_prime_main.size())
//     {
//         // if (!s.count(is_prime_main[i]))
//         // {
//         //     cout << i << " ";
//         // }
//         // if (!s.count(i / 2))
//         // {
//         //     cout << i / 2 << " ";
//         // }
//         // // cout << i << " " << i * 2 << " ";
//         // s.insert(i);
//         // s.insert(i / 2);

//         int k = is_prime_main[i];
//         if (k > n)
//             break;
//         int ii = 2;
//         for (ll j = k; j <= n; j *= ii)
//         {
//             // ii++;
//             if (!s.count(j))
//             {
//                 cout << j << " ";
//                 s.insert(j);
//             }
//         }
//     }

//     REP(i, 1, n + 1)
//     {

//         if (!s.count(i))
//         {
//             cout << i << " ";
//             s.insert(i);
//             int ii = 2;
//             for (ll j = i; j <= n; j *= ii)
//             {
//                 // ii++;
//                 if (!s.count(j))
//                 {
//                     cout << j << " ";
//                     s.insert(j);
//                 }
//             }
//         }
//     }
//     cout << nl;
// }
// int main()
// {
//     fast;
//     findPrime();
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
using namespace std;
typedef long long ll;
typedef long double ld;
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(), v.end()
#define vl vector<ll>
#define vi vector<int, int>
#define vp vector<pair<ll, ll>>
#define pb push_back
#define pf push_front
#define mp make_pair
#define ff first
#define ss second
#define MAX 200005
const ll MOD = 1000000007;
/*ll prime[10000000]={0};
void seive(){
    for(ll i=2;i<10000000;i++){
        for(ll j=i*i;j<30;j+=i){
            prime[j-1]=1;
        }
    }
}*/

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll vis[n] = {0}, l = 0;
        vl a;
        vis[0] = 1;
        for (ll i = 2; i <= n; i++)
        {
            if (!vis[i - 1])
            {
                ll k = i;
                while (k <= n)
                {
                    a.pb(k);
                    vis[k - 1] = 1;
                    k *= 2;
                }
            }
        }
        cout << 1 << ' ';
        for (ll i = 0; i < a.size(); i++)
            cout << a[i] << ' ';
        cout << endl;
    }
    return 0;
}