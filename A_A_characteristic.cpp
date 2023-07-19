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
int fact(int a)
{
    int s = 1;
    if (a == 0 || a == 1)
    {
        return 1;
    }
    while (a >= 1)
    {
        s *= a;
        a--;
    }
    return s;
}

void solve(int x)
{
    int n, k;
    cin >> n >> k;

    if (n == k)
    {
        int v = k * (k - 1) / 2;
        if (v == k)
        {
            cout << "YES" << nl;
            REP(i, 1, n + 1)
            {
                cout << 1 << " ";
            }
            cout << nl;
            return;
        }
        else
        {
            cout << "NO" << nl;
        }
    }
    else
    {
        int r = n;
        while (r >= 0)
        {
            int o = r * (r - 1) / 2;
            if (o > k)
            {
                r--;

                continue;
            }
            else
            {
                if (k == o + (n - r) / 2)
                {
                    cout << "YES" << nl;
                    if (n == 2)
                    {
                        REP(i, 0, r)
                        {
                            cout << 1 << " ";
                        }
                    }
                    else
                    {
                        REP(i, 0, r)
                        {
                            cout << 1 << " ";
                        }
                    }
                    REP(i, 0, n - r)
                    {
                        cout << -1 << " ";
                    }
                    cout << nl;
                    return;
                }
                else
                {
                    r--;
                    continue;
                }
            }
            // cout << r << nl;
            // return;
        }
        cout << "NO" << nl;
    }
}
int main()
{
    fast;
    // findPrime();
    int t;
    cin >> t;
    int x = 1;
    while (t--)
    {
        solve(x);
        x++;
    }
    // solve();
    return 0;
}
