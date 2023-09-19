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
    ll n, o = 0, t = 0, th = 0, f = 0, s = 0, fi = 0, se = 0;
    cin >> n;
    vi v(n);
    REP(i, 0, n)
    {
        cin >> v[i];
        if (v[i] == 7)
            se++;
        else if (v[i] == 6)
            s++;
        else if (v[i] == 5)
            fi++;
        else if (v[i] == 4)
            f++;
        else if (v[i] == 3)
            th++;
        else if (v[i] == 2)
            t++;
        else
            o++;
    }

    if (se > 0 || fi > 0 || th > o || t > o || (t > 0 && (f == 0 && s == 0)) || (th > 0 && s == 0) || (o > 0 && t == 0 && th == 0) || (s + f) != t + th)
    {
        cout << -1 << nl;
        return;
    }

    while (f > 0)
    {
        if (f > t || f > o)
        {
            cout << -1 << nl;
            return;
        }
        cout << 1 << " " << 2 << " " << 4 << nl;
        f--;
        t--;
        o--;
    }

    while (s > 0)
    {
        if (t > 0)
        {
            if (s > t + th || s > o)
            {
                cout << -1 << nl;
                return;
            }
            cout << 1 << " " << 2 << " " << 6 << nl;
            s--;
            t--;
            o--;
        }
        else
        {
            if (s > t + th || s > o)
            {
                cout << -1 << nl;
                return;
            }
            cout << 1 << " " << 3 << " " << 6 << nl;
            s--;
            th--;
            o--;
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
