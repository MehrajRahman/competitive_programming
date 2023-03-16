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
typedef pair<int,int> PII;

void solve()
{

    ll n, m = 1, s = 1;
    cin >> n;
    vector<int>v;
    for(int i = 0; i < n; ++i ){
        int x;
        cin >> x ;

        v.push_back(x);

    }

    for(int i = 1; i < n; ++i ){
        if(v[i] > v[i - 1]){
            s++;
            if(s > m){
                m = s;
            }
        }
        else{
            s = 1;
        }
    }

    cout << m << nl;


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
