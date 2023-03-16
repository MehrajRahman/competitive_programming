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
    string a, b;
    int flag = 0;
    cin >> a >> b;

    for(int i = 0; i < a.size(); ++i){
        if(a[i] < 97 ){
            a[i] += 32;
        }
        if(b[i] < 97 ){
            b[i] += 32;
        }

        if(a[i] > b[i]){
            cout << 1 << endl;
            flag = 1;
            break;
        }
        else if( a[i] < b[i]){
            cout << -1 << endl;
            flag = 1;
            break;
        }
    }

    if(flag == 0){
        cout << 0 << endl;
    }
    
}

int main()
{

    fast;
    /*int t;
    cin >> t;
    while (t--)*/
        solve();
    return 0;
}
