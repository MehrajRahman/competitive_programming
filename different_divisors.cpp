#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cout.tie(nullptr);            \
    cin.tie(nullptr);
#define precision cout << fixed << setprecision(12);
#define done cout << "Successful\n";
#define input(gggg, n)             \
    for (int xd = 0; xd < n; xd++) \
        cin >> gggg[xd];
#define print(x) cout << #x << " = " << x << "\n";
#define nl "\n"
#define sp " "

#define bg 1e6

vector<bool> is_prime(bg + 1, true);

void findPrime()
{
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= bg; i++)
    {
        if (is_prime[i] && (long long)i * i <= bg)
        {
            for (int j = i * i; j <= bg; j += i)
                is_prime[j] = false;
        }
    }
}

void solve()
{
    ll d;
    cin >> d;
    int minPrime = 0, minInd, largePrime;
    for (int i = d + 1; i < bg; i++)
    {
        // if (is_prime[i] && minPrime == 0)
        // {
        //     minPrime = i;
        //     i += d;
        //     i--;
        // }
        // else if (is_prime[i] && i > minPrime)
        // {
        //     largePrime = i;
        //     break;
        // }

        if (is_prime[i] && minPrime == 0)
        {
            cout << i << endl;
        }
    }

    cout << minPrime * largePrime << endl;
}
int main()
{
    fast;
    findPrime();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
