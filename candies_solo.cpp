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
    ll k = 2, n, d = 3;
    cin >> n;
    while(k <= n){
        if(n % d == 0){
            cout << n / d << endl;
            return;

        }else{
            k *= 2;
            d+=k;
        }
    }
    
}

int main()
{

    fast;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
