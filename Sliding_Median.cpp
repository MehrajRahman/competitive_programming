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
multiset<int> lft, rgt;
void add(int v)
{
    if (*(--lft.end()) >= v)
        lft.insert(v);
    else
        rgt.insert(v);
}

void remove(int v)
{
    if (lft.find(v) != lft.end())
    {
        lft.erase(lft.find(v));
    }
    else
    {
        rgt.erase(rgt.find(v));
    }
}
void adjust(int k)
{
    int l = (k + 1) / 2;
    int r = k - l;

    while (lft.size() > l)
    {
        rgt.insert(*(--lft.end()));
        lft.erase(--lft.end());
    }

    while (rgt.size() > r)
    {
        lft.insert(*rgt.begin());
        rgt.erase(rgt.begin());
    }
}
void solve()
{
    int n, k;
    cin >> n >> k;

    int x[n];

    REP(i, 0, n)
    {
        cin >> x[i];
    }

    REP(i, 0, k)
    {
        lft.insert(x[i]);
    }

    adjust(k);

    cout << *(--lft.end()) << " ";

    REP(i, k, n)
    {
        add(x[i]);
        remove(x[i - k]);
        adjust(k);

        cout << *(--lft.end()) << " ";
    }
    cout << nl;
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
