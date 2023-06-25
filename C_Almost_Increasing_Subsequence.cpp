#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef set<int> si;
typedef map<int, int> mi;
typedef map<char, int> mc;

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

void solve()
{
    int n, k, r, l, m = 0, rr = 0, kk = 0, a = 0;
    cin >> n >> k;
    vi v(n);
    vi t;
    REP(i, 0, n)
    {
        cin >> v[i];
    }
    int c = 0;

    REP(i, 0, n)
    {
        if (v[i - 1] < v[i])
        {
            c = 0;
            rr++;
        }
        else
        {
            c++;
            if (c >= 2)
            {
                // c = 0;
                t.PB(i);
            }
        }
    }
    sort(t.begin(), t.end());

    while (k--)
    {
        cin >> l >> r;
        a = r - l + 1;
        for (int x : t)
        {
            if (x >= l - 1 && x <= r - 1)
            {
                a--;
            }
        }

        cout << a << nl;
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
