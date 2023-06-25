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
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    if (abs(x2 - x1) == abs(y2 - y1) || (x1 == x2) || (y1 == y2))
    {
        if (x1 == x2)
        {
            int d = max(y1, y2) - min(y1, y2);
            cout << x2 + d << " " << y2 << " " << x1 + d << " " << y1 << nl;
        }
        else if (y1 == y2)
        {
            int d = max(x1, x2) - min(x1, x2);
            cout << x1 << " " << y1 + d << " " << x2 << " " << y2 + d << nl;
        }
        else
        {
            cout << x1 << " " << y2 << " " << x2 << " " << y1;
        }
    }
    else
    {
        cout << -1 << nl;
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
