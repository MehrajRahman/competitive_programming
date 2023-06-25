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
    vector<pi> v;
    si ss;
    REP(i, 0, n)
    {
        int x, y;
        cin >> x >> y;
        v.PB({x, y});
        ss.insert(x);
    }
    auto it = ss.end();
    --it;

    sort(v.begin(), v.end());

    int c = 0, k = 1, cc = 0;

    ll s = 0;

    REPP(i, n - 1, 0)
    {
        if (v[i].first == *it)
        {
            if (c == *it)
            {

                if (it == ss.begin())
                {
                    // s += v[i].second;
                    break;
                }
                c = 0;
                it--;

                continue;
            }

            if (c < *it)
            {
                s += v[i].second;
            }

            c++;
        }
        else if (v[i].first < *it)
        {
            s += v[i].second;
            c = 1;
            it--;
        }
    }

    cout << s << nl;
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

/*
4
4
2 2
1 6
1 10
1 13
5
3 4
3 1
2 5
3 2
3 3
6
1 2
3 4
1 4
3 4
3 5
2 3
1
1 1

*/
