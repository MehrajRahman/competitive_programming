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
    int n = 0;

    string a;
    cin >> a;

    for(int i = 0; i < a.size(); ++i){
        if(a[i] == '4' || a[i] == '7'){
            n++;
        }
    }
    if(n == 0){
        cout << "NO" << endl;
    }else{
        cout << "YES" <<endl;
    }
    while(n > 0){
        if(n % 10 == 4 || n % 10 == 7){
            n /= 10;
        }else{
            cout << "NO" << endl;
            return;
        }

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
