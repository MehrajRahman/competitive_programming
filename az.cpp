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

    ll n, flag = 0;
    cin >> n ;
    vector<string>v(n);

    for(int i = 0; i < n; ++i){
        cin>>v[i];
    }

    for(int i = 0; i<n; ++i){
        if(v[i][0] == 'O' && v[i][1] == 'O' ){
            v[i][0] = '+';
            v[i][1] = '+';
            flag = 1;
            break;
        }
        if(v[i][3] == 'O' && v[i][4] == 'O' ){
            v[i][3] = '+';
            v[i][4] = '+';
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        cout << "NO" << nl;
    }else{
        cout << "YES" << nl;
        for(int i = 0; i < n; ++i){
            cout << v[i] << nl;
        }
    }
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
