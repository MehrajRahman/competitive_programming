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
    int n, k, oo = 0, mo = 0, t = 0, co = 0;
    cin >> n >> k;
    vi v(n + 1), z;

    REP(i, 1, n + 1)
    {
        cin >> v[i];
        if (v[i] == 0)
            z.PB(i);
        if (i > 0 && v[i] == 1 && v[i - 1])
        {
            oo++;
            mo = max(oo, mo);
        }
        else
        {
            // mo = max(oo, mo);
            oo = t;
        }
        if (v[i] == 1)
        {
            co++;
            t = 1;
            if (oo == 0)
                oo = 1;
        }
    }

    int zc = 0, ans = 0, j = 1, l = 0, s = 0, e = 0;
    REP(i, 1, n + 1)
    {
        if (v[i] == 0)
        {
            zc++;
        }
        if (zc == k + 1 && k > 0)
        {
            if (i - j > ans)
            {
                s = j;
                e = i - 1;

                ans = max(ans, i - j);
            }

            j = z[l];
            ++l;
            zc--;
            // }
        }

        if (i == n)
        {
            if (i - j >= ans && k > 0)
            {
                s = j;
                e = i;
                ans = max(ans, i - j);
            }
        }
    }
    if (k == 0)
    {
        // if
        cout << max(mo, t) << nl;
        REP(i, 1, n + 1)
        {
            cout << v[i] << " ";
        }
    }
    else if (k == n - co)
    {
        cout << n << nl;
        REP(i, 0, n)
        {
            cout << 1 << " ";
        }
    }
    else
    {
        // cout << e - s << nl;
        int cc = 1, ans2 = 1;
        REP(i, 1, n + 1)
        {
            if (i > s && i <= e)
            {
                v[i] = 1;
            }
        }

        REP(i, 2, n + 1)
        {
            if (v[i] == 1 && v[i - 1] == 1)
            {
                cc++;
            }
            else
            {
                ans2 = max(ans2, cc);
                cc = 1;
            }
            if (i == n)
            {
                ans2 = max(ans2, cc);
            }
        }
        cout << ans2 << nl;

        REP(i, 1, n + 1)
        {
            if (i > s && i <= e)
            {
                cout << 1 << " ";
            }
            else
            {
                cout << v[i] << " ";
            }
        }
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
