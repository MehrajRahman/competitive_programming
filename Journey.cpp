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

vi v[100000 + 10];
int aa[100000 + 10];
double a = 0;
vi r;

void dfs(int u, int p, int c, double prob)
{
    aa[u] = 1;
    // c++;

    // for (int x : v[u])
    // {
    //     if (x == p)
    //         continue;
    //     dfs(x, u, ++c, prob / (v[u].size() - 1));
    // }

    // if (v[u].size() == 1 && u != 1)
    // {
    //     a += c * prob;
    //     r.PB(c);
    //     return;
    // }

    int count = 0;
    for (int x : v[u])
    {
        if (x == p)
            continue;
        count++;
    }
    if (!count)
    {
        a += c * prob;
    }
    else
    {
        double newprob = prob / count;
        for (int x : v[u])
        {
            if (x != p)
            {
                dfs(x, u, c + 1, newprob);
            }
        }
    }
}
void solve()
{
    int n;
    cin >> n;
    REP(i, 1, n)
    {
        int x, y;
        cin >> x >> y;
        v[x].PB(y);
        v[y].PB(x);
    }

    dfs(1, -1, 0, 1);

    double s = 0;

    REP(i, 0, r.size())
    {
        s += r[i];
        s -= 1;
    }

    double ans = (s * 1.00) / r.size();

    cout << fixed << setprecision(15) << a << nl;
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
