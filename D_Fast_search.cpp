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
    ll n;
    cin >> n;
    vector<ll> v(n);
    REP(i, 0, n)
    {
        cin >> v[i];
    }
    ll q;
    cin >> q;
    sort(v.begin(), v.end());
    while (q--)
    {
        ll x, y;
        cin >> x >> y;

        ll l = 0, e = n - 1, xi = 0, yi = 0, f = 0, k = 0;
        while (l <= e)
        {
            ll mid = l + (e - l) / 2;
            if (v[mid] >= x)
            {
                f = 1;
                xi = mid;
                e = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        l = 0;
        e = n - 1;

        while (l <= e)
        {
            ll mid = l + (e - l) / 2;
            if (v[mid] <= y)
            {
                if (f == 1)
                    k = 1;
                yi = mid;
                l = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
        if (k == 1)
        {
            cout << yi - xi + 1 << " ";
        }
        else
        {
            cout << 0 << " ";
        }

        // cout < < < < " ";
    }
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
