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

const int maxX = 1e6 + 1;

ll ans;
int N, dp[maxX];
bool b[maxX];
vi primes;

void init()
{
    fill(b + 2, b + maxX, true);
    for (int i = 2; i * i < maxX; i++)
        if (b[i])
            for (int j = i * i; j < maxX; j += i)
                b[j] = false;
    for (int i = 2; i < maxX; i++)
        if (b[i])
            primes.push_back(i);
}

void compute(int x)
{
    vector<int> pf;
    for (int p : primes)
    {
        if (x == 1)
            break;
        else if (b[x])
        {
            pf.push_back(x);
            break;
        }

        if (x % p)
            continue;
        pf.push_back(p);
        while (x % p == 0)
            x /= p;
    }

    int K = (int)pf.size();

    cout << "k is " << K << " " << (1 << K) << nl;

    for (int mask = 0; mask < (1 << K); mask++)
    {
        int mu = 1;
        for (int i = 0; i < K; i++)
            if (mask & (1 << i))
                mu *= pf[i];

        int k = __builtin_popcount(mask);
        ans += (k & 1 ? -dp[mu] : dp[mu]);
        dp[mu]++;
    }
}

void solve()
{
    int n, x;
    cin >> n;

    REP(i, 0, n)
    {
        cin >> x;
        compute(x);
    }
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
