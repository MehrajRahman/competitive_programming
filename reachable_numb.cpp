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
    int n;
    cin >> n;

    set<int>s;

    n++;
    s.insert(n);
    while(n >= 1){
        if(n % 10 == 0){
            while(n % 10 == 0){
                n /= 10;
            }
        }
        else{
            n++;
            if(s.count(n) > 0){
                cout << s.size() << endl;
                return;
            }else{
                s.insert(n);
            }
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
