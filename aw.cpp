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

    ll n, m = 0, s = 0;
    cin >> n;
    vector<PII>v;
    for(int i = 0; i < n; ++i ){
        int x,y;
        cin >> x >> y;

        v.push_back(make_pair(x, y));

    }

    for(int i = 0; i < n; ++i ){
        m += v[i].first > v[i].second;
        s += v[i].first < v[i].second;
    }

    if(m ==s){
        cout << "Friendship is magic!^^" << nl;
    }else if(m > s){
        cout << "Mishka" << nl;
    }
    else{
        cout << "Chris" << nl;
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
