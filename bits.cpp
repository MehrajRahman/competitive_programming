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
    int t, sum = 0;
    cin >> t;
    string a;

    for(int i = 0 ; i < t ; ++i){
        cin >> a;
        if(a[1] == '+'){
            sum++;
        }else{
            sum--;
        }
    }

    cout << sum << endl;

    
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
