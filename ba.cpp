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

void solve()
{

    ll n, m, ind;
    cin >> n >> m;
    vector<int>v(n);

    for(int i = 0; i < n; ++i){
        cin>>v[i];
    }

    for(int i = n -2; i>=0; --i){
        if(v[i+1]- v[i]>m){
            ind = i + 1;
            break;
        }
    }
    cout << n - ind  << nl;
}

int main()
{

    fast;
    // int t;
    // cin >> t;
    // while (t--)
        solve();
    return 0;
}
