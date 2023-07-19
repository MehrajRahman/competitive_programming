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
    string a;
    cin >> a;
    int l = a.size(), po = -1, pf = -1, s = 0, t = 0, co = 0, ans = INT_MAX;
    REPP(i, l - 1, 0)
    {
        if (a[i] == '5' && pf == -1)
        {
            pf = i;
        }
        if (a[i] == '0' && po == -1)
        {
            po = i;
        }
        if (a[i] == '0')
            co++;
        if (a[i] == '2')
            t++;
        if (a[i] == '7')
            s++;
    }

    int pt = -1, st = -1, so = -1, pfo = -1;
    REPP(i, l - 1, 0)
    {
        if (i < po && a[i] == '0' && so == -1)
            so = i;
        if (i < pf && a[i] == '2' && pt == -1)
            pt = i;
        if (i < pf && a[i] == '7' && st == -1)
            st = i;
        if (i < po && a[i] == '5' && pfo == -1)
            pfo = i;
    }
    int r1, r2;
    if (pt != -1)
    {
        r1 = l - pf - 1 + (pf - pt - 1);
        ans = min(ans, r1);
    }

    if (st != -1)
    {
        r2 = l - pf - 1 + (pf - st - 1);
        ans = min(ans, r2);
    }
    if (so != -1)
    {
        int cans = l - po - 1 + (po - so - 1);
        ans = min(ans, cans);
    }

    if (pfo != -1)
    {
        int cans = l - po - 1 + (po - pfo - 1);
        ans = min(ans, cans);
    }

    cout << ans << nl;
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
