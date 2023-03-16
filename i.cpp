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
    ll k = 2, n,  d = 0;
    string a, b;
    

    cin >> n;
    cin >> a;
    
    for(int i = 0; i <a.size() - n; i++){
        d = 0;
        for (int j = i; j < i + n; ++j)
        {
            if(d == i){
                b.push_back(a[j]);
                break;
            }
            d++;
            
        }
    }
    b.push_back(a[a.size() - 1]);

    cout << b << endl;
    
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
