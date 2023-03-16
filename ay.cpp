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
typedef pair<char,char> PCC;

void solve()
{

    ll n, m,flag = 0;
    cin >> n >> m;
    char arr[n][m];
    set<char>s = {'C', 'M', 'Y' };

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            char x;
            cin >> x;
            if(s.count(x) > 0){
                flag  = 1;
            }
            arr[i][j] = x;
        }
    }

    if(flag == 1){
        cout << "#Color" << nl;
    }else{
        cout << "#Black&White" << nl;
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
