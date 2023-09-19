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
mi m;
int c = 0;

#define N 1000006
int fr[N];
int cnt = 0;

void add(int v)
{
    if (fr[v] == 0)
        cnt++;
    fr[v]++;
}

void remove(int v)
{
    fr[v]--;
    if (fr[v] == 0)
        cnt--;
}

void solve()
{
    int n, k, d;
    cin >> n >> k >> d;

    cnt = 0;

    int x[n];
    REP(i, 0, n)
    {
        cin >> x[i];
    }

    REP(i, 0, d)
    {
        add(x[i]);
    }

    int ans = cnt;
    REP(i, d, n)
    {
        add(x[i]);
        remove(x[i - d]);

        ans = min(ans, cnt);
    }

    cout << ans << nl;

    REP(i, 0, n)
    {
        fr[x[i]] = 0;
    }
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
