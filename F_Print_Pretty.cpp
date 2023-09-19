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
    while (n--)
    {
        double a, b, c;
        cin >> a >> b >> c;
        ostringstream os;
        os << hex << ll(a);
        cout << "0x" << uppercase << os.str() << nl;
        if (b > 0)
        {
            string a;
            a = b;

            long long z = b;
            int k = 0;
            while (z > 0)
            {
                k++;
                z /= 10;
            }
            REP(i, 0, 15 - k - 4)
            {
                cout << '_';
            }

            cout << "+" << fixed << setprecision(2) << b << nl;
        }
        else
        {
            string a;
            a = b;

            int z = abs(b);
            int k = 0;
            while (z > 0)
            {
                k++;
                z /= 10;
            }
            REP(i, 0, 15 - k - 4)
            {
                cout << '_';
            }

            cout << fixed << setprecision(2) << b << nl;
        }

        cout << setiosflags(ios::uppercase) << scientific << setprecision(9) << c << nl;
    }
}
int main()
{
    fast;
    solve();
    return 0;
}
