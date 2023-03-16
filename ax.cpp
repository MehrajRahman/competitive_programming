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

    ll n;
    cin >> n ;
    string o = "I hate ", e = "I love ";
    set<char>s = {'C', 'M', 'Y' };

    for(int i = 1; i <= n; ++i){
        if(i == n){
            if(i % 2 == 0){
                cout << e << "it";
            }else{
                cout << o << "it";
            }
        }
        else{
            if(i % 2 == 0){
                cout << e << "that ";
                
            }else{
                cout << o << "that ";
            }
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
