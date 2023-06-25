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
    // int si, ei;
    set<char> s;
    vector<pair<char, int>> v;

    s.insert(a[0]);
    v.PB({a[0], 0});
    REP(i, 1, a.size())
    {
        if (a[i] != a[i - 1])
        {
            s.insert(a[i]);
            v.PB({a[i - 1], i - 1});
            v.PB({a[i], i});
        }
    }

    int aa = 20000000;
    if (s.size() < 3)
    {
        cout << 0 << nl;
        return;
    }
    else
    {
        si rc;
        rc.insert(v[0].first);
        int c = 1, ii = v[1].second, e = 0, ci = 0, cm;
        if (v.size() % 2 == 1)
        {
            v.PB({v[v.size() - 1].first, v[v.size() - 1].second});
        }
        for (int i = 3; i < v.size(); i += 2)
        {
            if (v[i].first != v[i - 2].first)
            {
                if (!rc.count(v[i].first))
                {
                    c++;
                    rc.insert(v[i].first);
                    if (c == 3)
                    {
                        cm = v[i - 2].second;
                        ci = i - 2;
                        rc.clear();
                        e = v[i - 1].second;
                        int k = e - ii;
                        if (k < aa)
                        {
                            aa = k;
                        }

                                                rc.insert(v[ci].first);
                        rc.insert(v[i].first);
                        ii = cm;
                        c = 2;
                    }
                }
                else
                {
                    rc.clear();
                    rc.insert(v[i - 2].first);
                    rc.insert(v[i].first);
                    c = 2;
                    ii = v[i - 2].second;
                }
            }
            else
            {
                if (c == 1)
                {
                    ii = v[i].second;
                }
            }
        }
    }
    cout << aa + 1 << nl;
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
