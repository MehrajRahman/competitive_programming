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

#define bg 10000000
vector<bool> t(bg + 7);

void prime()
{
    t[0] = t[1] = false;
    for (ll i = 2; i <= bg; i++)
    {
        t[i] = true;
    }
    for (ll i = 2; i * i <= bg; i++)
    {
        if (t[i])
        {
            for (ll j = i * i; j <= bg; j += i)
            {
                t[j] = false;
            }
        }
    }
}
void solve()
{
    int k;
    cin >> k;

    vector<ll> v(k);

    for (int i = 0; i < k; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < k; i++)
    {
       long double a = sqrt(v[i]);
       int x;
        if(ceil(a) == floor(a)){
            x = ceil(a);
        }
        if (t[x] && ceil(a) == floor(a))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
            
                
}

int main()
{
    fast;
    prime();
    // int t;
    // cin >> t;
    // while (t--)
    // {
    solve();
    // }
    return 0;
}
