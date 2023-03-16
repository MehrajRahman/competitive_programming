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
   int c = 0;
    string a;
    cin >> a;
    set<char>s =  {'a', 'e', 'i', 'o', 'u', '1', '3', '5','7', '9'};
    
    for(int i = 0; i <a.size(); i++){
        if(s.count(a[i]) == 1){
            c++;
        }
    }

    cout << c << endl;
    
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
