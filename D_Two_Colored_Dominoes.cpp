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
    int n, m;
    cin >> n >> m;

    vector<string> v(n);

    REP(i, 0, n)
    {
        cin >> v[i];
    }

    int rc = 0, lc = 0, f = 0;

    REP(i, 0, n)
    {
        REP(j, 0, m)
        {
            if (v[i][j] != '.')
                rc++;
        }
        if (rc % 2 == 1)
        {
            f = 1;
            break;
        }
        rc = 0;
    }

    REP(i, 0, m)
    {
        REP(j, 0, n)
        {
            if (v[j][i] != '.')
                lc++;
        }
        if (lc % 2 == 1)
        {
            f = 1;
            break;
        }
        lc = 0;
    }

    int cr = 0, cl = 0, cu = 0, cd = 0;
    if (f == 0)
    {
        REP(i, 0, n)
        {
            REP(j, 0, m)
            {
                if (v[i][j] == 'L')
                {
                    cl++;
                    if (cl % 2)
                    {
                        v[i][j] = 'B';
                    }
                    else
                    {
                        v[i][j] = 'W';
                    }
                }

                if (v[i][j] == 'R')
                {
                    cr++;
                    if (cr % 2)
                    {
                        v[i][j] = 'W';
                    }
                    else
                    {
                        v[i][j] = 'B';
                    }
                }

                if (v[i][j] == 'U')
                {
                    cu++;
                    if (cu % 2)
                    {
                        v[i][j] = 'W';
                    }
                    else
                    {
                        v[i][j] = 'B';
                    }
                }
                if (v[i][j] == 'D')
                {
                    cd++;
                    if (cd % 2)
                    {
                        v[i][j] = 'B';
                    }
                    else
                    {
                        v[i][j] = 'W';
                    }
                }
            }

            cd = 0, cu = 0, cr = 0, cl = 0;
            // }

            // int cu = 0, cd = 0;
            // REP(i, 0, m)
            // {
            //     REP(j, 0, n)
            //     {
            //         if (v[j][i] == 'U')
            //         {
            //             cu++;
            //             if (cu % 2)
            //             {
            //                 v[j][i] = 'B';
            //             }
            //             else
            //             {
            //                 v[j][i] = 'W';
            //             }
            //         }

            //         if (v[j][i] == 'D')
            //         {
            //             cd++;
            //             if (cu % 2)
            //             {
            //                 v[j][i] = 'W';
            //             }
            //             else
            //             {
            //                 v[j][i] = 'B';
            //             }
            //         }
            //         // v[j][i] = 'W';
            //     }
            // }
            // REP(i, 0, n)
            // {
            //     REP(j, 0, m)
            //     {
            //         if (v[i][j] == 'L')
            //         {
            //             v[i][j] = 'B';
            //         }
            //         if (v[i][j] == 'R')
            //             v[i][j] = 'W';

            //         if (v[j][i] == 'U')
            //             v[j][i] = 'B';
            //         if (v[j][i] == 'D')
            //             v[j][i] = 'W';
            //     }
        }

        REP(i, 0, n)
        {
            cout << v[i] << nl;
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
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    // solve();
    return 0;
}
