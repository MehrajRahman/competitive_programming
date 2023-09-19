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
    ll a, b, c, sum = 0;
    cin >> a >> b >> c;

    ll mini = min(min(a, b), c);

    sum += mini;
    a -= mini;
    b -= mini;
    c -= mini;

    if (a == b && a > 1 && b > 1)
    {
        sum++;
        a -= 2;
        b--;
    }

    ll mina = min(a, b);

    ll lo = 0, hi = mina + 1;

    ll xx = min((a + b) / 3, min(a, b));

    // while (lo + 1 < hi)
    // {
    //     ll mid = lo + (hi - lo) / 2;

    //     // if(2 * mid < )

    //     if (2 * mid <= max(a, b) && mid <= min(a, b))
    //     {
    //         lo = mid;
    //     }
    //     // else if (2 * mid == max(a, b) && mid == min(a, b))
    //     // {
    //     //     lo = mid;
    //     // }
    //     else
    //     {
    //         hi = mid;
    //     }
    // }
    // if (a > b)
    // {
    //     a -= 2 * lo;
    //     b -= lo;
    //     if (a > 0 && b > 0 && a + b > 3)
    //     {
    //         lo++;
    //     }
    // }
    // else
    // {
    //     b -= 2 * lo;
    //     a -= lo;
    //     if (a > 0 && b > 0 && a + b > 3)
    //     {
    //         lo++;
    //     }
    // }

    cout << sum + xx << nl;
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
