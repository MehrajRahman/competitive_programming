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
    int n;
    string a, b, c;
    cin >> n >> a;
    REP(i, 0, n)
    {
        if (a[i] == '2')
        {
            if (i == 0)
            {
                b.PB('1');
                c.PB('1');
            }
            else
            {
                b.PB('1');
                c.PB('1');
            }
        }
        else if (a[i] == '1')
        {
            b.PB('1');
            c.PB('0');
        }
        else
        {
            b.PB('0');
            c.PB('0');
        }
    }
    int f = 0, r = 0;
    REP(i, 0, n)
    {
        if (b[i] > c[i])
        {
            if (r == 0 && f == 0)
            {
                f = 1;
                continue;
            }
            if (f == 1)
            {
                char k = b[i];
                b[i] = c[i];
                c[i] = k;
            }
        }
        else if (c[i] > b[i])
        {
            if (f == 0 && r == 0)
            {
                r = 1;
                continue;
            }
            if (r == 1)
            {
                char k = b[i];
                b[i] = c[i];
                c[i] = k;
            }
        }
        else
        {
            if (r == 1)
            {
                if (c[i] == '1')
                {
                    b[i] = '2';
                    c[i] = '0';
                }
            }
            if (f == 1)
            {
                if (c[i] == '1')
                {
                    b[i] = '0';
                    c[i] = '2';
                }
            }
        }
    }
    cout << b << nl;
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
