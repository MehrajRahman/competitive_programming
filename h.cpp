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
    set<int>s;
    vector<int>v;
    for(int i = 0; i < n * 2; ++i){
        int x;
        cin >> x;
        if(s.count(x) == 0){
            s.insert(x);
            v.push_back(x);
        }
    }

    for(int i = 0; i < n; ++i){
        cout << v[i] << " ";
    }
    cout << endl;
    
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
