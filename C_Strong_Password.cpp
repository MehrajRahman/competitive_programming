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
    string inp, f, s;
    cin >> inp;
    int l, j = 0, flag = 0;
    cin >> l;

    cin >> f >> s;

    REP(j, 0, l)
    {
        
        int fi, se, ch = 0;
        fi = f[j] - '0';
        se = s[j] - '0';

        REP(i,fi,se){
            REP(i,0,inp.size()){
                
            }
        }


        int curr_char = inp[j] - '0';

        cout << fi << " " << se << " " << curr_char << " j is :" << j << nl;

        if (curr_char >= fi && curr_char <= se)
        {
            j++;

            cout << fi << " " << se << " " << curr_char << " j is :" << j << nl;

            // continue;
        }
        if (i == inp.size() - 1)
        {
            cout << j << nl;
            if (j <= l - 1)
            {
                flag = 1;
            }
        }
    }

    cout << "J is : " << j << nl;

    if (j >= l)
    {
        cout << "NO" << nl;
    }
    else
    {
        cout << "YES" << nl;
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
