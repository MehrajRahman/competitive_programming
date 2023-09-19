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
    int n, o = 0, z = 0;
    cin >> n;
    string a, b, c = "";
    cin >> a;
    b = a;
    reverse(b.begin(), b.end());
    REP(i, 0, n)
    {
        if (a[i] == '1')
            z++;
        else
            o++;
    }
    int d = 0;

    REP(i, 0, n / 2 + 1)
    {
        if (a[i] != a[n - i - 1])
        {
            d++;
        }
    }
    if (a == b && n & 1)
    {
        REP(i, 0, n + 1)
        {
            c.PB('1');
        }
    }
    else if (a == b && n % 2 == 0)
    {
        REP(i, 0, n + 1)
        {
            if ((z + i) % 2 == 0)
            {
                c.PB('1');
            }
            else
            {
                c.PB('0');
            }
        }
    }
    else
    {
        int mid = n / 2;
        REP(i, 0, n / 2 + 1)
        {
            if (i == z || i == o)
            {
                c.PB('1');
                continue;
            }
            if (n & 1)
            {
                if ((z + i) % 2 == 1 && i >= d && a[mid] != '1')
                {
                    c.PB('1');
                }
                else if ((z + i) % 2 == 0 && i >= d && a[mid] == '0')
                {

                    c.PB('1');
                }
                else
                {
                    c.PB('0');
                }
            }
            else
            {
                if ((z + i) % 2 == 0 && i >= d)
                {
                    c.PB('1');
                }
                else
                {
                    c.PB('0');
                }
            }
        }
        if (n & 1)
        {
            if ((z + mid) % 2 == 0 && mid >= d && a[mid] == '0')
            {
                c.PB('1');
            }
            else if ((z + mid) % 2 == 1 && mid >= d && a[mid] != '1')
            {
                c.PB('1');
            }
            else
            {

                c.PB('0');
            }
        }

        REPP(i, mid - 1, 0)
        {
            c.PB(c[i]);
        }
    }

    cout << c << nl;
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
