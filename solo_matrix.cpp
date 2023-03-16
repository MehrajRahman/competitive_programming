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
    int arr[6][6], c, r;

    for(int i = 1; i < 6; ++i){
        for(int j = 1; j < 6; ++j){
            int x;
            cin >> x;
            arr[i][j] = x;
            if(x == 1){
                r = i;
                c = j;
            }
        }
    }

    cout << abs(r - 3) + abs(c - 3) << endl;
    
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
