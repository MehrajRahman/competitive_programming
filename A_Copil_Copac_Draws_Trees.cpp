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
    cin >> n;
    vector<pi> v(n - 1);
    vector<si> r(n + 5);
    si s;

    REP(i, 0, n - 1)
    {
        int x, y;
        cin >> x >> y;
        v[i] = {x, y};
    }
    sort(v.begin(), v.end());

    /*
5
7
2 5
6 5
2 3
1 2
2 4
6 7
7
5 3
2 3
1 2
6 4
6 7
4 1
7
4 3
1 2
3 7
3 5
3 1
6 5
7
2 1
4 2
7 3
2 6
2 5
1 3
7
6 3
4 2
1 7
5 2
3 1
2 1

    */

    int c = 1;

    r[v[0].F].insert(v[0].S);
    s.insert(v[0].F);
    s.insert(v[0].S);
    if (n > 2)
    {
        REP(i, 1, n - 1)
        {

            if (v[i].F != v[i - 1].F)
            {
                r[v[i].F].insert(v[i].S);
                if (s.count(v[i].F) && !s.count(v[i].S))
                {
                    c++;
                    s.insert(v[i].F);
                    s.insert(v[i].S);
                }
                else
                {
                    s.insert(v[i].S);
                    s.insert(v[i].F);
                }
            }
            else
            {
                r[v[i].F].insert(v[i].S);
                s.insert(v[i].S);
            }
        }
        // for (int i = 0; i < n; ++i)
        // {
        //     if (r[i].size() > 0)
        //     {
        //         c++;
        //     }
        // }

        cout << c << nl;
    }
    else
    {
        cout << 1 << nl;
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
